#pragma once

#include <Windows.h>
#include <Psapi.h>
#include <string>
#include <random>
#include <atlimage.h>
#include <sstream>
#include <wininet.h>

#pragma comment(lib, "wininet.lib")

namespace Utils
{
	void* FindPattern(const char* szModule, const char* pattern, const char* mask);
	std::string RandomString(size_t len);
	std::vector<BYTE> TakeScreenShot();
	void SendPostRequest(const char* lpszServername, const char* lpszObjectName, const char* buffer, size_t len);
}