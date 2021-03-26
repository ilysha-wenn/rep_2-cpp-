#include <iostream>

struct Example 
{
    void static Error(char* message){
        std::cout << "[ERROR]: " << message << std::endl;
    };
    void static Warning(char* message){
        std::cout << "[WARNING]: " << message << std::endl;
    };
    void static Info(char* message){
        std::cout << "[INFO]: " << message << std::endl;
    };
};

int main(void){
    char* message = "hokage";
    Example::Error(message);
    Example::Warning(message);
    Example::Info(message);
    std::cin.get();
}