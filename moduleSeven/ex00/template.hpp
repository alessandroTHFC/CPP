#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template<typename whatever> 
whatever const& max(whatever const &thisOne, whatever const &thatOne ) {
    return(thisOne >= thatOne ? thisOne : thatOne);
}

template<typename whatever>
whatever const& min(whatever const &thisOne, whatever const &thatOne) {
    return(thisOne <= thatOne ? thisOne:thatOne);
}

template<typename whatever>
void swap(whatever  &thisOne, whatever &thatOne) {
    whatever  spare = thisOne;
    thisOne = thatOne;
    thatOne = spare;
}

#endif