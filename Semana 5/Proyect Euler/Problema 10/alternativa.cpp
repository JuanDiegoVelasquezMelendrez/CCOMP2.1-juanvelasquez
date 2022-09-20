#include <iostream>

using namespace std;

bool esPrimo(int n) {
    int contador{0};

    if (n==1){
        return false;
    }
    else {
        for(int i =n; i>=1; i--){

            if (n%i == 0) {
                contador +=1;
            }
        }
        if(contador == 2) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main() {

    int numero = 0;
    int sumatoria = 0;

    while (numero <=2000000) {
        if (esPrimo(numero)) {
            
            sumatoria += numero;
        }

        numero+= 1;
    }

    cout << sumatoria << endl;

    return 0;
}