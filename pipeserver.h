#pragma once

#include <stdio.h>
#include <windows.h>
#include <ctime>
#include <iostream>
#include <string>
#include <codecvt>

using namespace std;

DWORD WINAPI regiesterPipe(LPVOID lpParameter);
wstring str2wstr(const std::string& str);