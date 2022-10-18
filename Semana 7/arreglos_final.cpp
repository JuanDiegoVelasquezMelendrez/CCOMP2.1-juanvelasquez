#include <iostream>
#include "Point.h"

using namespace std;

void printArray(const Point array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        array[i].print();
    cout << "]" << endl;
}

void printArrayInt(const int array[], int tam) {
    cout << "{ ";
    for(int i = 0; i < tam-1; i++) {
        cout << array[1] << " ,";
    }
    cout << array[tam-1] << " }" << endl;
}

void intercambio(Point &a, Point &b) {
    Point tmp = a;
    a = b;
    b = tmp;
}
void intercambio_int(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/*
Implementar un algoritmo de ordenamiento (burbuja) para ordenar un arreglo de enteros
*/
void bsort(Point array[], int tam) {
    for(int i = 0; i < tam; i++) {
        for(int j = i + 1; j < tam; j++) {
            if(array[i].getX() > array[j].getX())
                intercambio(array[i], array[j]);
        }
    }
}

/*
Implementar insertionsort
*/

void iSort(int array[], int tam) {
    int key,j;
    for(int i = 0; i < tam; i++) {
        
        
    }    
}

int main() {
    Point p1;
    Point p2(4, 5);
    Point p3(6, 5);
    Point p4(4, 8);
    Point p5(14, 15);   

    Point arr[] = {p1, p2, p3, p4, p5};
    int tam = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, tam);
    bsort(arr, tam);
    printArray(arr, tam);

    int arr2[] = {5,4,3,7,8,4};
    int tam2 =sizeof(arr2) / sizeof(arr2[0]);

    printArrayInt(arr2;tam);
        
    return 0;
}