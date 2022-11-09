#ifndef _DYNAMICPOINTARRAY_H_
#define _DYNAMICPOINTARRAY_H_

#include <string>

#include "Point.h"

class DynamicPointArray {

public:

    DynamicPointArray();
    DynamicPointArray(const Point arr[], int size);
    DynamicPointArray(const DynamicPointArray &);
    
    int getSize() const;
    void push_back(Point elem);
    void insert(Point elem, int pos);
    void remove(int pos);
    void set_value(int pos, std::string xory, int value);

    Point getAt(int pos) const;

    ~DynamicPointArray();

private:
    int size;
    Point *data;
    friend std::ostream& operator<< (std::ostream &output, const DynamicPointArray &p);

};



#endif