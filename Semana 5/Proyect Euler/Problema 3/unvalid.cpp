#include <iostream>
#include "esprimo.h"

using namespace std;

int main() {

    unsigned long long num = 10;
    unsigned long long recorrido{0};
    int final{0};

    while (recorrido <= num)
    {
        
        if ( num%recorrido == 0)
        {
           cout << recorrido << endl;

           num /= recorrido;
        }
        
        recorrido++;
    }
    
    //cout << final << endl;

    return 0;
}