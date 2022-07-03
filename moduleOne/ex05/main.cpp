#include "harl.hpp"

int main(void) 
{
    harl    wanker;
    //prints the desired reponse to each of the required levels through function pointers;

    std::cout << "Debug: ";
    wanker.complain("DEBUG");
    std::cout << "Info: ";
    wanker.complain("INFO");
    std::cout << "Warning: ";
    wanker.complain("WARNING");
    std::cout << "Error: ";
    wanker.complain("ERROR");
    return(0);
}