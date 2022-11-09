#ifndef _DYNAMICPOINTARRAY_H_
#define _DYNAMICPOINTARRAY_H_

#include "Point.h"

class DynamicArrayOfPoints {

public:

    DynamicArrayOfPoints();
    ~DynamicArrayOfPoints();
    int getSize() const;
    void push_back(Point elem);
    void insert(Point elem, int pos);
    void remove(int pos);
    Point getAt(int pos) const;


private:
    int size;
    Point array[];
    friend std::ostream& operator<< (std::ostream &output, const DynamicArrayOfPoints &d);

};

std::ostream& operator<<(std::ostream & output, const DynamicArrayOfPoints &p) {
    
    output << "[";

    for (int i = 0; i < p.size; i++) {

        Point point = p.getAt(i);

        output << " ( "<< point.getX() << ", " << point.getY() << " )";
    
    }

    output << " " << " ]";

    return output;

}

#endif