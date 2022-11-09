#ifndef __STPOINTARRAY_H__
#define __STPOINTARRAY_H__

#include "Point.h"

class StaticArrayOfPoints {
        int size;
        Point *data;     
        friend std::ostream& operator<< (std::ostream &output, const StaticArrayOfPoints &p);
    public:
        StaticArrayOfPoints(int size);
        StaticArrayOfPoints(const StaticArrayOfPoints &o);

        void setAt(int index, Point value);
        Point getAt(int index) const ;
        int getSize() const ;

        ~StaticArrayOfPoints();
};

#endif