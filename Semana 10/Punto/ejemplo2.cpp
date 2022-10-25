#include <iostream>
#include "Point.h"

using namespace std;

int main() {

    Point p1;
    if (true) {
        Point p2{3,5};
        p2.print();
    }

    Point *ptr = new Point(4,5);

    p1.print();
    ptr->print();

    delete ptr;
    return 0;
}