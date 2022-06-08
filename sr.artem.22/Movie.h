#pragma once
#include "TVprogram.h"
class Movie :
public TVprogram {
protected:
string description;
int year;
public:
Movie(string description, int year, string name, Time_ time);
~Movie();
void setDescription(string description);
string getDescription()const&;
void setYear(int year);
int getYear()const&;
virtual string type() const& override { return "Movie"; }
virtual string toString() const& override;
};
