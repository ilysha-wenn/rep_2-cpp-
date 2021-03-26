#include <iostream>

class Log{
public:
    enum Level{
        Error = 0, Warning, Info
    };

private:
    Level LogLevel = Error;

public:
    void ErrorLvl(char* message){
        if(LogLevel >= Error)
            std::cout << "[ERROR]: " << message << std::endl;
    };
    void WarnLvl(char* message){
        if(LogLevel >= Warning)
            std::cout << "[Warning]: " << message << std::endl;
    };
    void InfoLvl(char* message){
        if(LogLevel >= Info)
            std::cout<< "[INFO]: " << message << std::endl;
    };
};

int main(void){
    char* message = "hokage";
    Log log;
    log.ErrorLvl(message);
    log.WarnLvl(message);
    log.InfoLvl(message);

    std::cin.get();
}