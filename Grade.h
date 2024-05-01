
#ifndef GRADE_H
#define GRADE_H
#include <string>

class Grade
{
private:
    int student_id;
    int course_id;
    std::string assignment;
    int value;

public:
    Grade(int student_id,
          int course_id,
          std::string assignment,
          int value);
    Grade();
    ~Grade();
};

#endif // !GRADE_H
