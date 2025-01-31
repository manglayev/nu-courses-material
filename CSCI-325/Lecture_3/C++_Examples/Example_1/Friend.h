#pragma once
#include <condition_variable>
#include <mutex>
#include <iostream>
#include <string>

class Friend
{    
    public:
        Friend(std::string friendName):name{friendName}{}
        
        void bow(Friend &bower)
        {
            {
                std::unique_lock dataLock1{m_mutex};
                std::unique_lock dataLock2{bower.m_mutex};
                std::cout<<name<<": "<<bower.getName()<<" bowed to me!\n";
                bower.bowBack(*this);
            }
            //m_cv.notify_one();
        }
        void bowBack(Friend &bower)
        {
            {
                std::unique_lock dataLock{m_mutex};
                std::cout<<name<<": "<<bower.getName()<<" bowed back to me!\n";
            }
            //m_cv.notify_one();
        }
        std::string getName()
        {
            return name;
        }
        void setName(std::string friendName)
        {
            name = friendName;
        }
    private:
        std::condition_variable m_cv;
        std::mutex m_mutex;
        std::string name;
};