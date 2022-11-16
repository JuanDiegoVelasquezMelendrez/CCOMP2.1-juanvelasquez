#include <iostream>

#include "Student.h"
#include "StudentsArray.h"

using namespace std;

StudentsArray::StudentsArray() {

    this->size = 0;
    data = new Estudiante [0];

}
StudentsArray::StudentsArray(const Estudiante arr[], int size) {

    this->size = size;

    data = new Estudiante [size];
    for (size_t i = 0; i < size; i++) {

        data[i] = arr[i];
        
    }
    

}
StudentsArray::StudentsArray(const StudentsArray &);

int getSize() const;
void push_back(Estudiante elem);
void insert(Estudiante elem, int pos);
void remove(int pos);