#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void ) {
    int x = 0, y = 0, soma = 0, nInicial = 0;
    while(std::cin >> x >> y) {
        nInicial = x;
        soma = 0;

        if(y > 0) {  
            for(int count = 0; count < y; count++) {
                soma += nInicial;
                nInicial++;
            }
        } else if(y < 0) { 
            int absn = y * (-1); 
            for(int count = 0; count < absn; count++) {
                soma += nInicial;
                nInicial--;
            }
        } else soma = x; 

        std::cout << soma << std::endl;
    }
    return 0;
}
