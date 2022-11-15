#include <iostream>

#include "PointWTemplate.h"

using namespace std;


 int main() {

    Point<float> fpoint(2.5, 3.5);

    cout << fpoint.getX() << ", " << fpoint.getY() << endl;
    
    return 0;

 }