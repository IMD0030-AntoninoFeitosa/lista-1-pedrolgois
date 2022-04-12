#include "function.h"

std::pair<int,int> min_max( int V[], size_t n )
{
    if(n == 0){
        return std::make_pair(-1, -1);
    } 

    int min = V[0]; 
    std::size_t indexMin = 0;

    int max = V[0]; 
    std::size_t indexMax = 0;

    for(std::size_t index = 0; index < n; index++) {
        if(V[index] < min) {
            min = V[index];
            indexMin = index;
        }
        
        if(V[index] >= max) { 
            max = V[index];
            indexMax = index;
        } 
    }
    
    return std::make_pair(minIndex, maxIndex); 
}
