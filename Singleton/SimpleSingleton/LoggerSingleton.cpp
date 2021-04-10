#include<iostream>
#include"LoggerSingleton.h"
#include<string>

LoggerSingleton* LoggerSingleton::LoggerObj=NULL;

void LoggerSingleton::Log(std::string &data)
{
   std::cout<<data<<std::endl;
}


void LoggerSingleton::Log(std::wstring &data)
{
    std::cout<<data.c_str()<<std::endl;
}

LoggerSingleton::LoggerSingleton()
{
    std::cout<<"Constructing Logger"<<std::endl;
}

LoggerSingleton& LoggerSingleton::operator=(const LoggerSingleton&){ 
    return *this; 
}



LoggerSingleton* LoggerSingleton::getLoger()
{
    if(LoggerObj == NULL)
        {
            LoggerObj = new LoggerSingleton();
        }
    return LoggerObj;
}
