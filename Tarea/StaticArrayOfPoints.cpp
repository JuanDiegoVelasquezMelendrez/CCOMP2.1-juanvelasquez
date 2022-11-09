#include <iostream>
#include "StaticArrayOfPoints.h"

StaticArrayOfPoints::StaticArrayOfPoints(int size) {
    data = new Point[size];
    this->size = size;
}

/* Constructor Copia */

StaticArrayOfPoints::StaticArrayOfPoints(const StaticArrayOfPoints &o) {
    size = o.size;
    data = new Point[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void StaticArrayOfPoints::setAt(int index, Point value) {
    if(index >= 0 && index < size)
        data[index] = value;
}

Point StaticArrayOfPoints::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];            
}

int StaticArrayOfPoints::getSize() const {
    return size;
}

StaticArrayOfPoints::~StaticArrayOfPoints() {
    delete [] data;
}

std::ostream& operator<<(std::ostream & output, const StaticArrayOfPoints &p) {
    
    output << "[";


    for (int i = 0; i < p.size; i++) {

        output << " " << p.getAt(i);

        if (i =! p.size-1) {

            output << " , ";

        }
    
    }

    output << " ]";

    return output;

}