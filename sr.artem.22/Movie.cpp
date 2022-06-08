#include "Movie.h"

Movie::Movie(string description, int year, string name, Time_ time) : TVprogram(name, time) {
this->description = description;
this->year = year;
}

Movie::~Movie() {}

void Movie::setDescription(string description) {
this->description = description;
}

string Movie::getDescription() const& {
return description;
}

void Movie::setYear(int year) {
this->year = year;
}

int Movie::getYear() const& {
return year;
}

string Movie::toString() const& {
    string sh;
    sh += "Name : " + name;
    sh += " ";
    sh += "Time : " + time.toStringTime();
    sh += " ";
    sh += "Description : " + getDescription() + " ";
    sh += " ";
    sh += "Year : " + getYear();
    return sh;
}
