#include<iostream>
#include"LoggerSingleton.h"

void LoggerSingleton::Log(std::string &data)
{
    std::cout<<data<<std::endl;
}
LoggerSingleton* LoggerSingleton::LoggerObj=NULL;

LoggerSingleton* LoggerSingleton::getLoger()
{
    if(LoggerObj == NULL)
        {
            LoggerObj = new LoggerSingleton();
        }
        return LoggerObj;
}