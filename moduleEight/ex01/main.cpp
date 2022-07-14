#include "span.hpp"

int main(void) {
    ///first try block will successfully get a largest and smallest span as it has 11 numbers
    ///however when using the addNumber function to add 666 this will case the error to be triggered
    ///As the vector already contrained its maxmimum amount possible. 

    try {
        span    hop(11);
        hop.addLotzaNumbaz(2);
        hop.printNums();
        std::cout << "Shortest Span between values is " << hop.shortestSpan() << std::endl;
        std::cout << "Longest Span between values is " << hop.longestSpan() << std::endl;
        hop.addNumber(666);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>" << std::endl;
    ///Second Try block is only testing the functionality of the other exception needed
    ///if there are less than 2 numbers in the vector then a span cannot be achieved
    try {
        span    eddie(1);
        eddie.addLotzaNumbaz(2);
        eddie.printNums();
        std::cout << "Shortest Span between values is " << eddie.shortestSpan() << std::endl;
        std::cout << "Longest Span between values is " << eddie.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}