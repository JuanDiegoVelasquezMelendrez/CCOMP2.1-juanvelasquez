//cuando se trabaj con templates es recomendable declarar y desarrollar una clase solo en un(.h)
// tratando de evitar dividirlo en (.h) y (.cpp)

#ifndef __POINT_H__
#define __POINT_H__

template <typename T>
class Point {
private:
    T x, y;

public:
    Point(const T u = 0, const T v = 0) : x(u), y(v) {}

    T getX() { return x; }
    T getY() { return y; }

};

/*

template<typename T>                // <-- Asi se puede desarrollar funciones fuera de la clase.
T Point<T>::getX() const {      
      
    return x;

}

template <typename T>
T Point<T>::getY() const {

    return y;

}

*/

#endif