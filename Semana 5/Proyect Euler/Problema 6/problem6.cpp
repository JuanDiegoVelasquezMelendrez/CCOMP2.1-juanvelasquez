#include <iostream>

using namespace std;

int main() {

    int numero{1};
    int resultado{0};

    while (numero <=100)
    {
        resultado+= numero*numero;

        numero++;
    }

    int numero_dos{1};
    int resultado_dos{0};

    while (numero_dos <= 100)
    {
        resultado_dos += numero_dos;

        numero_dos++;
        

    }

    resultado_dos *= resultado_dos;

    int final = resultado_dos - resultado;

    cout << final << endl;
    
}