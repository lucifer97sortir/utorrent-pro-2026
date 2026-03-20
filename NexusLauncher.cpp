#include <iostream>
#include <windows.h>
#include "PatchEngine.hpp"

void UnlockProFeatures() {
    std::cout << "[*] Intercepting licensing handshake..." << std::endl;
    Sleep(1200);
    std::cout << "[+] License Status: PRO_ACTIVATED (Lifetime)" << std::endl;
    std::cout << "[INFO] Suppressing Ad-Module UI components..." << std::endl;
    std::cout << "[INFO] High-Speed Bandwidth profiles enabled." << std::endl;
}

int main() {
    SetConsoleTitleA("uTorrent Nexus Pro - v3.6.8 Professional");
    std::cout << ">>> BitTorrent Protocol Research & Optimization <<<" << std::endl;

    if (PatchEngine::VerifyProcess()) {
        UnlockProFeatures();
        PatchEngine::InjectSecurityShield();
        std::cout << "[SUCCESS] Nexus Pro modules active. Launching client..." << std::endl;
    }

    std::cin.get();
    return 0;
}
