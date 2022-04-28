#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int num = 0, neg = 0;
    
    for(int x = 0; x < SIZE; x++) {
        std::cin >> num;
        if (num < 0) neg++;
    }

    std::cout << neg;

    return 0;
}
