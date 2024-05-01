
#include "University.h"

University::University(std::string name, std::string location, int course_size)
    : name(name), location(location), course_size(course_size), courses(new Course[course_size]), current(0), gradebook(Gradebook(100))
{
}
University::University() : University("", "", 0)
{
}
void University::addCourse(int id, std::string name)
{
    if (current < course_size)
    {
        courses[current++] = Course(name, id, 20);
    }
}
Course *University::getCourse(int index)
{

    return &this->courses[index];
}
University::~University()
{
    delete[] courses;
}
