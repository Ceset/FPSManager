#include <iostream>
#include "fpsmanager.h"

int main()
{
    unsigned int fpsCount = 0;
    FPSManager::Initialize(60);

    while(fpsCount <= 60){
        if(FPSManager::shouldDrawNewFrame()){
            std::cout << "Current fps drawn is    : " << fpsCount << std::endl;
            std::cout << "Time elapsed            : " << FPSManager::getElapsedTime() << std::endl;
            std::cout << "Time since game started : " << FPSManager::getTime() << std::endl;
            fpsCount++;
        }
    }

    return 0;
}
