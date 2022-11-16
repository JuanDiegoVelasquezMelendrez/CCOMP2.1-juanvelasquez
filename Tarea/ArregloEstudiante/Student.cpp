#include "Student.h"

#include <iostream>
#include <string>

Estudiante::Estudiante() {

    this->name = "default name";
    this->age = 0;
    this->id = 0;

}
Estudiante::Estudiante(std::string name, int id, int age)
{
    this->name = name;
    this->age = age;
    this->id = id;
}

void Estudiante::setName(std::string newname) {

    this->name = newname;
}

void Estudiante::setId(int newId) {

        this->id = newId;
    }
void Estudiante::setAge(int newAge){

    this->age = newAge;
}

std::string Estudiante::getName() const{

    return this->name;
}
int Estudiante::getId() const{
    return this->id;
}
int Estudiante::getAge() const {

    return this->age;
}

std::ostream& operator<< (std::ostream &output, const Estudiante &p) {

    output << "Estudiante: " << p.name << ", de la edad de: "
    << p.age << " años." << "\n" << "ID: " << p.id;

    return output;

}