#include "Criminal.h"
#include "Police.h"

void Criminal::releaseHostage(Police &police)
{
    {
        while (!police.isMoneySent())
        {
            std::cout << "Criminal: waiting police to give ransom!\n";
        }
        std::cout << "Criminal: hostage is released!\n";
        this->hostageReleased = true;
    }
}

bool Criminal::isHostageReleased()
{
    return this->hostageReleased;
}