#include <iostream>

using namespace std;


bool esPrimo(int n) {
    int contador{0};

    if (n==1){
        return 0;
    }
    else {
        for(int i =n; i>=1; i--){

            if (n%i == 0) {
                contador +=1;
            }
        }
        if(contador == 2) {
            return 1;
        }
        else {
            return 0;
        }
    }
}


int main() {

    int contador{0};
    int respuesta{0};
    int num{0};


    while (contador != 10001)
    {
        if (esPrimo(num)) {
            contador++;
            respuesta = num;
        }
        num++;
    }


    cout << respuesta << endl;

    return 0;
    
}