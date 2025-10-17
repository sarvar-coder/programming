#include <iostream>

int main() { 
    std:: string myName = "Sarvar"; 
    std::string *pMyName = &myName;
    std::cout << pMyName << std::endl;

}