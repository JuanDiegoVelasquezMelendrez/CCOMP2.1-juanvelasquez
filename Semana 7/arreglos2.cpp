#include <iostream>
#include "Point.h"

using namespace std;

void printArray(const Point array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        array[i].print();
    cout << "]" << endl;
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
        
    return 0;
}