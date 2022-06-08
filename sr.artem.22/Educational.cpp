#include "Educational.h"

Educational::Educational(string branchOfScience, string name, Time_ time) : TVprogram(name, time) {
this->branchOfScience = branchOfScience;
}

Educational::~Educational() {}

void Educational::setBranchOfScience(string branchOfScience) {
this->branchOfScience = branchOfScience;
}

string Educational::getBranchOfScience() const& {
return branchOfScience;
}

string Educational::toString() const& {
    string sh;
    sh += "Name : " + name;
    sh += " ";
    sh += "Time : " + time.toStringTime();
    sh += " ";
    sh += "Description : " + getBranchOfScience() + " ";
    return sh;
}