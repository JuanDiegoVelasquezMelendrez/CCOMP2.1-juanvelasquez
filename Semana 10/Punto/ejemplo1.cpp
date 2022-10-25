#include <iostream>
#include "Point.h"

using namespace std;

int main() {

    Point p;

    //creando un puntero de tipo point
    Point *ptr;

    //haciendo que el puntero 'ptr' apunte a 'p'
    ptr = &p;

    ptr->print();

    return 0;
}