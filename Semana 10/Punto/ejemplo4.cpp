#include <iostream>
#include "Point.h"

using namespace std;

void printArray(const Point *array, int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++, array++)
        array->print();
    cout << " ]" << endl;
}

int main() {
    Point p1;
    Point p2(12,5);
    Point p3(2,15);
    Point p4(10,8);
    Point p5(1,4);

    Point arreglo[] = {p1, p2, p3, p4, p5};    
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    
    printArray(arreglo,  tam);


    return 0;
}