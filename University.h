
#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include "Course.h"
#include "Gradebook.h"

class University
{

private:
    std::string name;
    std::string location;

    int course_size;
    Course *courses;
    int current;

public:
    Gradebook gradebook;
    University(std::string name, std::string location, int course_size);

    University();
    Course *getCourse(int index);
    void addCourse(int id, std::string name);
    ~University();
};

#endif // !UNIVERSITY_H
