#include <iostream>

using namespace std;

int main() {

    //Operador de Dirección (&):

    int y{5};
    int* yPtr{nullptr};

    yPtr = &y;

    return 0;
}