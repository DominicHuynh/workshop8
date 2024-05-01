
#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include "Grade.h"
class Student : public Person
{
private:
    int id;

public:
    Grade *grades;
    int current;
    Student(std::string name, int id);
    Student();
    ~Student();
};

#endif // !STUDENT_H
