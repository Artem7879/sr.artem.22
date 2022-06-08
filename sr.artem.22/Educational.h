#pragma once
#include "TVprogram.h"
class Educational :
public TVprogram {
protected:
string branchOfScience;
public:
Educational(string branchOfScience, string name, Time_ time);
~Educational();
void setBranchOfScience(string branchOfScience);
string getBranchOfScience()const&;
virtual string type() const& override { return "Education"; }
virtual string toString() const& override;
};