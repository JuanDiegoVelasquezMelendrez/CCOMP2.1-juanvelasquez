#include <iostream>
#include "Point.h"
#include "DynamicArrayOfPoints.h"

using namespace std;

int main() {

    DynamicArrayOfPoints array;
    cout << array.getSize() << endl;

    Point p1;
    Point p2;
    Point p3;

    array.push_back(p1);
    array.push_back(p2);
    array.push_back(p3);

    cout << array << endl;

    return 0;
}
