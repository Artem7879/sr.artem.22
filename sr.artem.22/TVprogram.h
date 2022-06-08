#pragma once
#include<string>
#include<iostream>
#include "Time_.h" 
using namespace std;
class TVprogram {
protected:
string name;
Time_ time;
public:
TVprogram(string name, Time_ time);
~TVprogram();
void setname(string name);
string getname()const&;
void setTime(Time_ time);
Time_ getTime()const&;
bool operator < (const TVprogram& obj)const&;
virtual string type() const& = 0;
virtual string toString() const& = 0;
};
