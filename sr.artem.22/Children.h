#pragma once
#include "TVprogram.h"
class Children :
public TVprogram {
protected:
int minAge;
int maxAge;
public:
Children(int minAge, int maxAge, string name, Time_ time);
~Children();
void setMinAge(int minAge);
int getMinAge()const&;
void setMaxAge(int maxAge);
int getMaxAge()const&;
virtual string type() const& override { return "Children"; }
virtual string toString() const& override;
};

