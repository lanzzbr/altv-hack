#include "Hacks.h"
#include "Utils.h"

DWORD WINAPI Main()
{
    AllocConsole();
    freopen_s((FILE**)stdin, "conin$", "r", stdin);
    freopen_s((FILE**)stdout, "conout$", "w", stdout);

    LPVOID LoadResource = Utils::FindPattern("altv-client.dll", "\x48\x89\x5c\x24\x00\x48\x89\x6c\x24\x00\x56\x57\x41\x54\x41\x56\x41\x57\x48\x81\xec\x00\x00\x00\x00\x48\x8b\x05", "xxxx?xxxx?xxxxxxxxxxx????xxx");
    LPVOID OpenFile = Utils::FindPattern("altv-client.dll", "\x48\x89\x5c\x24\x00\x48\x89\x74\x24\x00\x55\x57\x41\x56\x48\x8d\x6c\x24\x00\x48\x81\xec\x00\x00\x00\x00\x48\x8b\x05\x00\x00\x00\x00\x48\x33\xc4\x48\x89\x45\x00\x48\x8b\x59", "xxxx?xxxx?xxxxxxxx?xxx????xxx????xxxxxx?xxx");
    LPVOID NewString = Utils::FindPattern("altv-client.dll", "\x48\x89\x5c\x24\x00\x56\x57\x41\x54\x41\x56\x41\x57\x48\x83\xec\x00\x8b\xbc\x24", "xxxx?xxxxxxxxxxx?xxx");
    LPVOID SocialId = Utils::FindPattern("altv-client.dll", "\x48\x8b\x81\x00\x00\x00\x00\x48\x85\xc0\x75\x00\xc3", "xxx????xxxx?x");
    LPVOID MachineGuid = Utils::FindPattern("altv-client.dll", "\x40\x53\x48\x81\xec\x00\x00\x00\x00\x48\x8b\x05\x00\x00\x00\x00\x48\x33\xc4\x48\x89\x84\x24\x00\x00\x00\x00\x48\x8d\x44\x24\x00\xc7\x44\x24\x00\x00\x00\x00\x00\x48\x89\x44\x24\x00\x4c\x8d\x05\x00\x00\x00\x00\x33\xdb\x48\x8d\x44\x24\x00\x48\x89\x44\x24\x00\x48\x8d\x15\x00\x00\x00\x00\x48\xc7\xc1\x00\x00\x00\x00\x48\x89\x5c\x24\x00\x44\x8d\x4b\x00\xff\x15\x00\x00\x00\x00\x85\xc0\x0f\x85\x00\x00\x00\x00\x48\x89\xb4\x24\x00\x00\x00\x00\x48\x8d\x44\x24\x00\x48\x89\xbc\x24\x00\x00\x00\x00\x49\xc7\xc0\x00\x00\x00\x00\x48\x89\x5c\x24\x00\x48\xc7\x44\x24\x00\x00\x00\x00\x00\x88\x5c\x24\x00\x49\xff\xc0\x42\x38\x1c\x00\x75\x00\x48\x8d\x54\x24\x00\x48\x8d\x4c\x24\x00\xe8\x00\x00\x00\x00\x48\x8b\x7c\x24\x00\x48\x8d\x4c\x24\x00\x48\x8b\x5c\x24\x00\x48\x83\xff\x00\x48\x8b\x54\x24\x00\x48\x0f\x43\xcb\x45\x33\xc0\xe8\x00\x00\x00\x00\x48\x8b\xf0\x48\x83\xff\x00\x72\x00\x48\x8d\x57\x00\x48\x8b\xc3\x48\x81\xfa\x00\x00\x00\x00\x72\x00\x48\x8b\x5b\x00\x48\x83\xc2\x00\x48\x2b\xc3\x48\x83\xc0\x00\x48\x83\xf8\x00\x76\x00\xff\x15\x00\x00\x00\x00\xcc\x48\x8b\xcb\xe8\x00\x00\x00\x00\x48\x8b\xbc\x24\x00\x00\x00\x00\x48\x8b\xc6\x48\x8b\xb4\x24\x00\x00\x00\x00\x48\x8b\x8c\x24\x00\x00\x00\x00\x48\x33\xcc\xe8\x00\x00\x00\x00\x48\x81\xc4\x00\x00\x00\x00\x5b\xc3\x33\xc0\xeb\x00\x48\x63\x41", "xxxxx????xxx????xxxxxxx????xxxx?xxx?????xxxx?xxx????xxxxxx?xxxx?xxx????xxx????xxxx?xxx?xx????xxxx????xxxx????xxxx?xxxx????xxx????xxxx?xxxx?????xxx?xxxxxxxx?xxxx?xxxx?x????xxxx?xxxx?xxxx?xxx?xxxx?xxxxxxxx????xxxxxx?x?xxx?xxxxxx????x?xxx?xxx?xxxxxx?xxx?x?xx????xxxxx????xxxx????xxxxxxx????xxxx????xxxx????xxx????xxxxx?xxx");
    LPVOID ProductId = Utils::FindPattern("altv-client.dll", "\x40\x53\x48\x81\xec\x00\x00\x00\x00\x48\x8b\x05\x00\x00\x00\x00\x48\x33\xc4\x48\x89\x84\x24\x00\x00\x00\x00\x48\x8d\x44\x24\x00\xc7\x44\x24\x00\x00\x00\x00\x00\x48\x89\x44\x24\x00\x4c\x8d\x05\x00\x00\x00\x00\x33\xdb\x48\x8d\x44\x24\x00\x48\x89\x44\x24\x00\x48\x8d\x15\x00\x00\x00\x00\x48\xc7\xc1\x00\x00\x00\x00\x48\x89\x5c\x24\x00\x44\x8d\x4b\x00\xff\x15\x00\x00\x00\x00\x85\xc0\x0f\x85\x00\x00\x00\x00\x48\x89\xb4\x24\x00\x00\x00\x00\x48\x8d\x44\x24\x00\x48\x89\xbc\x24\x00\x00\x00\x00\x49\xc7\xc0\x00\x00\x00\x00\x48\x89\x5c\x24\x00\x48\xc7\x44\x24\x00\x00\x00\x00\x00\x88\x5c\x24\x00\x49\xff\xc0\x42\x38\x1c\x00\x75\x00\x48\x8d\x54\x24\x00\x48\x8d\x4c\x24\x00\xe8\x00\x00\x00\x00\x48\x8b\x7c\x24\x00\x48\x8d\x4c\x24\x00\x48\x8b\x5c\x24\x00\x48\x83\xff\x00\x48\x8b\x54\x24\x00\x48\x0f\x43\xcb\x45\x33\xc0\xe8\x00\x00\x00\x00\x48\x8b\xf0\x48\x83\xff\x00\x72\x00\x48\x8d\x57\x00\x48\x8b\xc3\x48\x81\xfa\x00\x00\x00\x00\x72\x00\x48\x8b\x5b\x00\x48\x83\xc2\x00\x48\x2b\xc3\x48\x83\xc0\x00\x48\x83\xf8\x00\x76\x00\xff\x15\x00\x00\x00\x00\xcc\x48\x8b\xcb\xe8\x00\x00\x00\x00\x48\x8b\xbc\x24\x00\x00\x00\x00\x48\x8b\xc6\x48\x8b\xb4\x24\x00\x00\x00\x00\x48\x8b\x8c\x24\x00\x00\x00\x00\x48\x33\xcc\xe8\x00\x00\x00\x00\x48\x81\xc4\x00\x00\x00\x00\x5b\xc3\x33\xc0\xeb\x00\xcc", "xxxxx????xxx????xxxxxxx????xxxx?xxx?????xxxx?xxx????xxxxxx?xxxx?xxx????xxx????xxxx?xxx?xx????xxxx????xxxx????xxxx?xxxx????xxx????xxxx?xxxx?????xxx?xxxxxxxx?xxxx?xxxx?x????xxxx?xxxx?xxxx?xxx?xxxx?xxxxxxxx????xxxxxx?x?xxx?xxxxxx????x?xxx?xxx?xxxxxx?xxx?x?xx????xxxxx????xxxx????xxxxxxx????xxxx????xxxx????xxx????xxxxx?x");
    LPVOID LicenseHash = Utils::FindPattern("altv-client.dll", "\x48\x89\x5c\x24\x00\x48\x89\x6c\x24\x00\x56\x57\x41\x54\x41\x56\x41\x57\x48\x83\xec\x00\x48\x8b\x05\x00\x00\x00\x00\x48\x33\xc4\x48\x89\x44\x24\x00\x48\x8b\xea", "xxxx?xxxx?xxxxxxxxxxx?xxx????xxxxxxx?xxx");

    Hacks::Initialize(LoadResource, OpenFile, NewString, SocialId, MachineGuid, ProductId, LicenseHash);

    while (true)
    {
        std::string input;
        std::getline(std::cin, input);

        std::size_t arg = input.find(" ");

        if (arg == std::string::npos)
        {
            if (input.find("dump") != std::string::npos)
                Hacks::Dump();
            else if (input.find("weapon") != std::string::npos)
                Hacks::BlockWeaponCheck();
                
            continue;
        }

        if (input.find("exec") != std::string::npos)
            Hacks::LoadFile(input.substr(arg + 1));
        else if (input.find("serial") != std::string::npos)
            Hacks::ChangeSerial(input.substr(arg + 1));
        else if (input.find("remove") != std::string::npos)
            Hacks::Remove(input.substr(arg + 1));
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        HANDLE hThread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Main, hModule, 0, nullptr);
        if (hThread)
        {
            CloseHandle(hThread);
            DisableThreadLibraryCalls(hModule);
        }
    }
    return TRUE;
}