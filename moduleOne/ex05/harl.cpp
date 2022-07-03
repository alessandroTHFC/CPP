#include "harl.hpp"
//Constructor
harl::harl() {
    std::cout << "---Harl is born, Harl is an ballbreaker---" << std::endl;
}
//Deconstructor
harl::~harl() {
    std::cout << "---Harl is dead, fk off Harl---" << std::endl;
}
//Harl complain function takes the required level as a parameter
void    harl::complain(std::string level)
{
    void    (harl::*funcPtr[4]) (void) = { //function pointer array to 4 harl functions

        &harl::debug, 
        &harl::info, 
        &harl::warning, 
        &harl::error
    };

    std::string levelType[4] = { //string array of the 4 levels

        "DEBUG", 
        "INFO", 
        "WARNING", 
        "ERROR"
    };

    for (int i = 0; i < 4; i++) { //loops through the 4 levels
        if (level == levelType[i])//if level parameter matches one of the 4 set in level types;
            (this->*funcPtr[i])();//call the corresponding function pointer at that index;
    }
}

void    harl::debug(void) {
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL fat bastard cheeseburgers, i really do." << std::endl;
}

void    harl::info(void) {
    std::cout << "I can't believe adding extra bacon cost more money! ";
    std::cout << "i'm an abnoxious prick that expects shit for free ";
    std::cout << "put more bacon in that badboy! now!" << std::endl;
}

void    harl::warning(void) {
    std::cout << "I think i deserve free bacon! Ive been coming here ";
    std::cout << "for years, can't you see i'm an obese pig, ";
    std::cout << "you've only been here a month." << std::endl;
}

void    harl::error(void) {
    std::cout << "This is bullshit, get me your manager young man." << std::endl;
}