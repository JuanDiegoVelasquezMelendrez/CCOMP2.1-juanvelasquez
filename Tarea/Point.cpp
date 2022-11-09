#include <string>

#include "Point.h"

std::ostream& operator<<(std::ostream & output, const Point &p) {
        output << "("<< p.x << ", " << p.y << ")";

        return output;
}