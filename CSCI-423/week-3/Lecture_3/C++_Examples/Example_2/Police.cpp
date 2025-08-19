#include "Police.h"
#include "Criminal.h"
#include <thread>

void Police::giveRansom(Criminal &criminal)
{
    {
        while (!criminal.isHostageReleased())
        {
            std::cout << "Police: waiting criminal to release hostage!\n";
        }
        std::cout << "Police: sent money!\n";
        this->moneySent = true;
    }
}

bool Police::isMoneySent()
{
    return this->moneySent;
}