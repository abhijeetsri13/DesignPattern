#include<iostream>
#include<string>


class LoggerSingleton
{
    private:
        LoggerSingleton();
        static LoggerSingleton* LoggerObj;
        LoggerSingleton& operator=(const LoggerSingleton&);
    public:
        static LoggerSingleton* getLoger();
        void Log(std::string &data);
        void Log(std::wstring &data);
};