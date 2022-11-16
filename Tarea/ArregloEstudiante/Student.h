#ifndef _ESTUDIANTE_H_
#define _ESTUDIANTE_H_

#include <string>

class Estudiante
{
private:
    std::string name;
    int id;
    int age;
    friend std::ostream& operator<< (std::ostream &output, const Estudiante &p);
public:
    Estudiante();
    Estudiante(std::string n, int _id, int a);

    void setName(std::string);
    void setId(int);
    void setAge(int);

    std::string getName() const;
    int getId() const;
    int getAge() const;

};

#endif