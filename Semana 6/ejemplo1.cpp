#include <iostream>
#include "point.h"

using namespace std;

int suma(int a, int b) {
    return a+b;
}

void imprimir(int a) {
    cout << "El entero es " << endl;
}
void imprimirPoint(Point p) {
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
}
//paso por valor(simplemente hace una copia del point)
//paso por referencia(modifica el valor de point)
void modificarPoint( Point &p,int _x, int _y) {
    p.setX(_x);
    p.setY(_y);
}

void intercambio(int &a, int &b) {
    int x = b;
    b = a;
    a = x;
}


int main() {
    /* int result = suma(5,6);
    //string cad = suma(5,7); // ERROR

    cout << suma(5,6) << endl; */

    int a = 1;
    int b = 3;

    intercambio(a,b);
    cout << a << endl;
    cout << b << endl;

    Point p1(5,5);
    imprimirPoint(p1);

    modificarPoint(p1,6,4);

    imprimirPoint(p1);


    return 0;
}