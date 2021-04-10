#include<iostream>
#include<string>


class LoggerSingleton
{
    private:
        LoggerSingleton();
    public:
        static LoggerSingleton* getLoger();
        static LoggerSingleton* LoggerObj;
        void Log(std::string &data);
}