#ifndef __STUDENTSARRAY__
#define __STUDENTSARRAY__

#include "Student.h"

class StudentsArray
{
private:
    int size;
    Estudiante *data;
    friend std::ostream& operator<< (std::ostream &output, const StudentsArray &p);
public:
    StudentsArray();
    StudentsArray(const Estudiante arr[], int size);
    StudentsArray(const StudentsArray &);

    int getSize() const;
    void push_back(Estudiante elem);
    void insert(Estudiante elem, int pos);
    void remove(int pos);
    //void set_value(int pos, std::string item, int value);

    Estudiante getAt(int pos) const;

    ~StudentsArray();
};





#endif