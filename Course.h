
#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Person.h"
#include "Grade.h"
class Course
{
private:
    std::string name;
    int id;
    int capacity;
    Person **persons;
    int current;

public:
    Course(std::string name, int id, int capacity);
    Course();
    void addPerson(Person *p);
    ~Course();
};

#endif // !COURSE_H
