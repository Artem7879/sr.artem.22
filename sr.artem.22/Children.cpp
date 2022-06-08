#include "Children.h"

Children::Children(int minAge, int maxAge, string name, Time_ time) : TVprogram(name, time)
{
this->minAge = minAge;
this->maxAge = maxAge;
}

Children::~Children()
{
}

void Children::setMinAge(int minAge)
{
this->minAge = minAge;
}

int Children::getMinAge() const&
{
return minAge;
}

void Children::setMaxAge(int maxAge)
{
this->maxAge = maxAge;
}

int Children::getMaxAge() const&
{
return maxAge;
}

string Children::toString() const&
{
    string sh;
    sh += "Name : " + name;
    sh += " ";
    sh += "Time : " + time.toStringTime();
    sh += " ";
    sh += "Min age : " + getMinAge();
    sh += " ";
    sh += "Max age : " + getMaxAge();
    sh += " ";
    return sh;
}
