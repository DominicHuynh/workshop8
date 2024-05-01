
#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
{
protected:
    std::string name;

public:
    Person(std::string name);
    Person();
    ~Person();
};

#endif // !PERSON_H
