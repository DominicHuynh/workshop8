
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
#include "Grade.h"
class Gradebook
{
private:
    int size;
    Grade *grades;
    int current;

public:
    Gradebook(int size);
    Gradebook();
    void addGrade(int stud_id, int course_id, std::string assignment, int value);
    ~Gradebook();
};

#endif // !GRADEBOOK_H
