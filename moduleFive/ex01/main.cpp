#include "Bureucrat.hpp"

int main(void) {
    ///first Try Block should return error because Grade is higher than 200;
   try {
       bureucrat bCrat1("Randy", 200);
   }
   catch(std::exception &e) {
       std::cout << e.what() << std::endl;
   }
    ///second Try Block should return error because Grade is lower than 1;
    try {
       bureucrat bCrat2("Carson", -200);
   }
   catch(std::exception &e) {
       std::cout << e.what() << std::endl;
   }
    ///third Try Block should not return error;
     try {
       bureucrat bCrat3("Hans", 20);
       std::cout << bCrat3;
   }
   catch(std::exception &e) {
       std::cout << e.what() << std::endl;
   }
}