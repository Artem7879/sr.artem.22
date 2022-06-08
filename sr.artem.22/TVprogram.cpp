#include "TVprogram.h"

TVprogram::TVprogram(string name, Time_ time) {
this->name = name;
this->time = time;
}

TVprogram::~TVprogram() {}

void TVprogram::setname(string name) {
this->name = name;
}

string TVprogram::getname() const& {
return name;
}

void TVprogram::setTime(Time_ time) {
this->time = time;
}

Time_ TVprogram::getTime() const& {
return time;
}

bool TVprogram::operator<(const TVprogram& obj) const& {
return this->time < obj.time;
}