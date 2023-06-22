#ifndef MUSIC_H
#define MUSIC_H

#include <windows.h>
#include <mmsystem.h>
#include <iostream>
#include <thread>

#include "variables.h"

typedef BOOL(WINAPI *PlaySoundFunc)(LPCTSTR, HMODULE, DWORD);

void playMusic(const CHAR* pathToFile)
{
    HMODULE winmm = LoadLibrary("winmm.dll"); //tady jsem musel pøetytovat const char* na LPCWSTR manuálnì, ale nevim, jak proc to nefunguje, takze pokud ti to netrowuje nejakej error, tak je to asi fajne, btw jsem to zmenil na HMODULE winmm = LoadLibrary((LPCWSTR)"winmm.dll");  - Antonín Šonka 22.6.2023
    if (winmm == nullptr)
    {
        std::cerr << "Failed to load winmm.dll" << std::endl;
        return;
    }

    PlaySoundFunc playSound = reinterpret_cast<PlaySoundFunc>(GetProcAddress(winmm, "PlaySoundA"));
    if (playSound == nullptr)
    {
        std::cerr << "Failed to retrieve PlaySound function" << std::endl;
        return;
    }
    playSound(pathToFile, nullptr, SND_FILENAME | SND_ASYNC | SND_LOOP); //tady jsem musel pøetytovat manuálnì 'pathToFile' na LPCTSTR, zmenil jsem to u sebe na playSound((LPCTSTR)pathToFile, nullptr, SND_FILENAME | SND_ASYNC | SND_LOOP);, ale pokud to tobì funguje, tak fajne - Antonín Šonka 22.6.2023
    std::cout << "Playing Music\n";

    // Keep the music playing until stopped
    while (battleEnded != true)
    {
        // Sleep for a short duration to avoid excessive CPU usage
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Stop playing the music
    playSound(nullptr, nullptr, 0);
    std::cout << "Stopped Music\n";

    FreeLibrary(winmm);
}

/*
    // Start playing music in a separate thread
    std::thread musicThread(playMusic, filePath.c_str());

    // Do other tasks in the main thread
    std::string input;
    std::cout << "Press Enter to stop the music: ";
    std::getline(std::cin, input);

    // Signal the music thread to stop
    musicThread.detach();
    */
#endif
