#include <iostream>

#include "Point.h"
#include "DynamicPointArray.h"
#include "StaticPointArray.h"

using namespace std;

int main() {

    DynamicPointArray array;
    

    Point p1;
    Point p2;
    Point p3;

    array.push_back(p1);
    array.push_back(p2);
    array.push_back(p3);

    cout << array.getSize() << endl;

    cout << array << endl;
    
    return 0;
}
