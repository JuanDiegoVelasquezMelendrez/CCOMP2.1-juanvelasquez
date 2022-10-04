#include <iostream>
#include "Point.h"

using namespace std;

void printArray(const Point array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        array[i].print();
    cout << "]" << endl;
}

void bsort(Point array[], int tam) {
    for(int i = 0; i < tam; i++) {
        for(int j = i + 1; j < tam; j++) {
            if(array[i].getX() > array[j].getX()) {
                int x_one = array[i].getX();
                int y_one = array[i].getY();
                int x_two = array[j].getX();
                int y_two = array[j].getY();
                
                array[i].setX(x_two);
                array[i].setY(y_two);
                array[j].setX(x_one);
                array[j].setY(y_one);
                
            }
        }
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

    bsort(arr,tam);

    printArray(arr, tam);


        
    return 0;
}