#include <iostream>

using namespace std;

int main() {

    int y{100};

    //Se esta delarando la referencia a entero yRef.
    //yRef hace referencia a y
    int &yRef{y};

    //Se esta declarando el puntero a entero yPtr
    int* yPtr{nullptr};

    yPtr = &y;

    cout << yPtr << endl;
    cout << &y << endl;

    cout << *yPtr << endl;

    *yPtr = 1000;
    
    cout << y << endl;

    return 0;
}