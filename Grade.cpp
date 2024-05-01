
#include "Grade.h"

Grade::Grade(int student_id,
             int course_id,
             std::string assignment,
             int value) : student_id(student_id), course_id(course_id), assignment(assignment), value(value)
{
}
Grade::Grade() : Grade(0, 0, "", 0)
{
}
Grade::~Grade()
{
}
