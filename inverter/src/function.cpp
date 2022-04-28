#include "function.h"
#include <iterator>
#include <iostream>
#include <array>

using std::iter_swap;

template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    int stop = arr.size()/2;     
    int init = 0;         
    int final = arr.size() - 1;

    for(init; init < stop; init++) {
        std::swap(arr[init], arr[final]);
        final--;
    }
    return;
}   
