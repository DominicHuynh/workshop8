#include "Course.h"
Course::Course(std::string name, int id, int capacity) : name(name), id(id), capacity(capacity), persons(new Person *[capacity]), current(0)
{
}
Course::Course() : Course("", 0, 0)
{
}
void Course::addPerson(Person *p)
{
    if (current < capacity)
    {
        persons[current++] = p;
    }
}
Course::~Course()
{
    for (int i = 0; i < current; i++)
    {
        delete persons[i];
    }

    delete[] persons;
}