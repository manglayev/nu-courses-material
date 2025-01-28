#include "Police.h"
#include "Criminal.h"

void Police::giveRansom(Criminal &criminal)
{
    {
        std::unique_lock<std::mutex> dataLock{m_mutex};
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