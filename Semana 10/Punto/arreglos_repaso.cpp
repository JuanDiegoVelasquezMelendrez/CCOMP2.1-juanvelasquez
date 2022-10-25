#include <iostream>

using namespace std;

void printArray(const int array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << array[i] << " ";
    cout << "]" << endl;
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/*
Implementar un algoritmo de ordenamiento (burbuja) para ordenar un arreglo de enteros
*/
void bsort(int array[], int tam) {
    for(int i = 0; i < tam; i++) {
        for(int j = i + 1; j < tam; j++) {
            if(array[i] > array[j])
                intercambio(array[i], array[j]);
        }
    }
}

int main() {
    int arreglo[] = {5, 7, 10, 3, 9};
    // sizeof -> retorna el tamaño en bytes del tipo de dato
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    
    printArray(arreglo,  tam);
    bsort(arreglo, tam);
    printArray(arreglo,  tam);
    
    return 0;
}