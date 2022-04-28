/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int tamanho = 5;
    int c[5]{0, 0, 0, 0, 0};

    int x = 0;
    int t = 0;

    while(cin >> std::ws >> x) {
        t++;
        if(x >= 0 && x < 25){ 
            c[0]++;}
        else if(x >= 25 && x < 50){ 
            c[1]++;}
        else if(x >= 50 && x < 75){ 
            c[2]++;}
        else if(x >= 75 && x < 100){ 
            c[3]++;}
        else if(x < 0 || x >= 100){ 
            c[4]++; }
    }

    // quantifying and printing the percentages
    for(int index = 0; index < tamanho; index++) {
        std::cout << std::setprecision(4) << ((float)c[index]/(float)t)*100 << std::endl;
    }

    return 0;
}
