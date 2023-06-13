#include <windows.h>
#include <mmsystem.h>
#include <iostream>
#include <string>
#include <thread>

#include "variables.h"

typedef BOOL(WINAPI *PlaySoundFunc)(LPCTSTR, HMODULE, DWORD);

void playMusic(const CHAR* pathToFile)
{
    HMODULE winmm = LoadLibrary("winmm.dll");
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

    playSound(pathToFile, nullptr, SND_FILENAME | SND_ASYNC | SND_LOOP);
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
