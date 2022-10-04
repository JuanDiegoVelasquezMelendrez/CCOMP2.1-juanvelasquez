#include <iostream>
#include "Point.h"

using namespace std;


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