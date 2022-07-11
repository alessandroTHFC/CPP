#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>


template<typename whatever>
void    print(whatever const &text) {
    std::cout << text << std::endl;
};

template<typename array>
void    iter(array *list, int &size, void (*function)(array const &list)) {
    int i = 0;
    while (i < size) {
        function(list[i]);
        i++;
    }
};


#endif