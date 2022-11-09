#include <iostream>

#include "DynamicPointArray.h"
#include "Point.h"

DynamicPointArray::DynamicPointArray() {
    
    this->size = 0;
    data = new Point[0];

}

DynamicPointArray::DynamicPointArray(const Point arr[], int size){

    this->size = size;
    data = new Point[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];

}

DynamicPointArray::DynamicPointArray(const DynamicPointArray &o) {

        this->size = o.size;
        this->data = new Point[o.size];
        for(int i = 0; i < size; i++)
            data[i] = o.data[i];

}

int DynamicPointArray::getSize() const {
    return size;
}

void DynamicPointArray::push_back(Point elem) {
    // 1
    Point *tmp = new Point[size + 1];
    // 2
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    // 3
    tmp[size] = elem;
    // 4
    size += 1;
    // 5
    delete [] data;
    // 6
    data = tmp;
}

void DynamicPointArray::insert(Point elem, int pos) {
    // 1
    Point *tmp = new Point[size + 1];
    // 2
    for(int i = 0, j = 0; i < size; i++, j++) {
        if( j == pos) {
            tmp[pos] = elem;
            i--;
        } else {
            tmp[j] = data[i];
        }        
    }
    // 3
    size += 1;
    // 4
    delete [] data;
    // 5
    data = tmp;
} 

void DynamicPointArray::remove(int pos) {
    // 1
    Point *tmp = new Point[size - 1];
    // 2
    for(int i = 0, j = 0; i < size; i++, j++) {
        if( j == pos) {
            i++;
        } else {
            tmp[j] = data[i];
        }        
    }
    // 3
    size -= 1;
    // 4
    delete [] data;
    // 5
    data = tmp;
    
} 

Point DynamicPointArray::getAt(int pos) const {

    return data[pos];

}

DynamicPointArray::~DynamicPointArray() {

    delete[] data;

}
void DynamicPointArray::set_value(int pos, std::string xory, int value) {

    if (xory == "x" || xory == "X") {
        
        data[pos-1].setX(value);

    }
    else {

        if (xory == "y" || xory == "Y") {

            data[pos-1].setY(value);

        }
        
    }
    
}

std::ostream& operator<<(std::ostream & output, const DynamicPointArray &p) {
    
    output << "[";


    for (int i = 0; i < p.getSize(); i++) {

        output << " " << p.getAt(i);

        if (i =! p.size-1) {

            output << " , ";

        }
    
    }

    output << " ]";

    return output;

}