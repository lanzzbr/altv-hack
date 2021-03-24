#include "Utils.h"

void* Utils::FindPattern(const char* szModule, const char* pattern, const char* mask)
{
    MODULEINFO mInfo = { 0 };
    HMODULE hModule = GetModuleHandleA(szModule);

    if (!hModule)
        return nullptr;

    GetModuleInformation(GetCurrentProcess(), hModule, &mInfo, sizeof(MODULEINFO));

    uintptr_t begin = (uintptr_t)mInfo.lpBaseOfDll;
    DWORD size = mInfo.SizeOfImage;
    size_t patternLen = strlen(mask);

    for (DWORD i = 0; i < size; i++)
    {
        bool found = true;
        for (size_t j = 0; j < patternLen; j++)
        {
            if (mask[j] != '?' && pattern[j] != *(char*)(begin + i + j))
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return (void*)(begin + i);
        }
    }
    return nullptr;
}

std::string Utils::RandomString(size_t len)
{
    std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(str.begin(), str.end(), generator);

    return str.substr(0, len);
}