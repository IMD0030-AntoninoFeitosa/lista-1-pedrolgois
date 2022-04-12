#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
     vector<unsigned int> fibonacci;

     int number;
     int index = 0;
     bool controll = true;

     while(controll){
         if(index == 0 || index == 1){
             if(n > 1){ 
                 fibonacci.push_back(1);
             }
             else{
                 return fibonacci;
             }
         }else{
             number = fibonacci[index-1] + fibonacci[index-2];
             if(number < n){
                 fibonacci.push_back(number);
             }else{
                 controll = false;
             }
         }
         index++;
     }

    return fibonacci;
}
