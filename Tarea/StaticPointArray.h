#ifndef __STPOINTARRAY_H__
#define __STPOINTARRAY_H__

#include "Point.h"

class StaticPointArray {
        int size;
        Point *data;     
        friend std::ostream& operator<< (std::ostream &output, const StaticPointArray &p);
    public:
        StaticPointArray(int size);
        StaticPointArray(const StaticPointArray &o);

        void setAt(int index, Point value);
        Point getAt(int index) const ;
        int getSize() const ;
        void set_value(int pos, std::string xory, int value);

        ~StaticPointArray();
};

#endif