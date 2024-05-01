
#include <iostream>

#include <string>
#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Gradebook.h"
int main(int argc, char const *argv[])
{
    University university("UofA", "Adelaide", 20);
    university.addCourse(1, "Math");

    Student *s1 = new Student("Elvis", 1);
    university.getCourse(0)->addPerson(s1);
    university.gradebook.addGrade(1, 1, "Assignment 1", 100);
    return 0;
}
