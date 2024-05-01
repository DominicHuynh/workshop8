
#include "Gradebook.h"

Gradebook::Gradebook(int size) : size(size), grades(new Grade[size]), current(0)
{
}
Gradebook::Gradebook() : Gradebook(0)
{
}
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value)
{
    if (current < size)
    {
        grades[current] = Grade(stud_id, course_id, assignment, value);
        current++;
    }
}
Gradebook::~Gradebook()
{
    delete[] grades;
}
