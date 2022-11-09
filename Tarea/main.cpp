#include <iostream>
#include "Point.h"
#include "DynamicArrayOfPoints.h"

using namespace std;

int main() {

    DynamicArrayOfPoints array;
    

    Point p1;
    Point p2;
    Point p3;

    array.push_back(p1);
    array.push_back(p2);
    array.push_back(p3);

    cout << array.getSize() << endl;

    //cout << array << endl;

    cout << p1 << endl;

    return 0;
}
