#include <iostream>
#include "esprimo.h"

using namespace std;

int main() {

    int number = 0;
    int counter = 0;
    while (counter != 1001)
    {
        if (isPrimo(number))
        {
            counter++;
        }
        number++;
    }
    

    cout << number << endl;

    return 0;
}