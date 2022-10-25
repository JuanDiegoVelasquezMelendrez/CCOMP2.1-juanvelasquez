#include <iostream>
#include "Point.h"

using namespace std;

int main() {

    Point p1;
    Point p2(4, 5);
    Point p3(6, 5);
    Point p4(4, 8);
    Point p5(14, 15);   

    Point arreglo[] = {p1, p2, p3, p4, p5};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    Point *ptr = arreglo;

    for (int i = 0; i < tam; i++, ptr++)
    {
        ptr->print();
    }
    
    //cout << endl;

    /*
    cout << arreglo << endl;
    cout << ptr << endl;
    cout << &arreglo[0] << endl;

    arreglo->print();
    ptr->print();
    */
    return 0;
}