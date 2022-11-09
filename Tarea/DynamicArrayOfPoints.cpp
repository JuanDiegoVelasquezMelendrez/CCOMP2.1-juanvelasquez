#include <iostream>

#include "DynamicArrayOfPoints.h"
#include "Point.h"

DynamicArrayOfPoints::DynamicArrayOfPoints() {
    
    this->size = 0;
    data = new Point[0];

}

DynamicArrayOfPoints::DynamicArrayOfPoints(const Point arr[], int size){

    this->size = size;
    data = new Point[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];

}

DynamicArrayOfPoints::DynamicArrayOfPoints(const DynamicArrayOfPoints &o) {

        this->size = o.size;
        this->data = new Point[o.size];
        for(int i = 0; i < size; i++)
            data[i] = o.data[i];

}

int DynamicArrayOfPoints::getSize() const {
    return size;
}

void DynamicArrayOfPoints::push_back(Point elem) {
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

void DynamicArrayOfPoints::insert(Point elem, int pos) {
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

void DynamicArrayOfPoints::remove(int pos) {
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

Point DynamicArrayOfPoints::getAt(int pos) const {

    return data[pos];

}

DynamicArrayOfPoints::~DynamicArrayOfPoints() {

    delete[] data;

}

std::ostream& operator<<(std::ostream & output, const DynamicArrayOfPoints &p) {
    
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