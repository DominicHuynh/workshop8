
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
class Instructor : public Person
{
private:
public:
    Instructor(std::string name);
    Instructor();
    ~Instructor();
};

#endif // !INSTRUCTOR_H
