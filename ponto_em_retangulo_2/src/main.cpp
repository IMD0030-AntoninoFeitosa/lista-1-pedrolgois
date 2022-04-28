#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

void verificarPosicao( Ponto *P1, Ponto *P2 ) {
    Ponto aux;
    if((P1->x == P2->x && P1->y < P2->y) || (P1->x < P2->x) || (P1->y == P2->y && P1->x < P2->x)) {
        return;
    } else { // função pra trocar de posicao
        aux = *P1;
        *P1 = *P2;
        *P2 = aux;
    } 
}


int main(void)
{
    Ponto P, IE, SD;
    while(cin >> std::ws >> IE.x >> std::ws >> IE.y >> std::ws >> SD.x >> std::ws >> SD.y >> std::ws >> P.x >> std::ws >> P.y) {

        if(IE.x == SD.x && IE.y == SD.y){ 
            std::cout << "invalid" << std::endl;
        } else {
            verificarPosicao(&IE, &SD);
            location_t result = pt_in_rect(IE, SD, P);

            // prints the result of the analysis done by pt_in_rect
            if(result == 0){
                std::cout << "inside" << std::endl;
            } else if(result == 1){
                std::cout << "border" << std::endl;
            } else {
                std::cout << "outside" << std::endl;
            }
        }
    }
    return 0;
}
