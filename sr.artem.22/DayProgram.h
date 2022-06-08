#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include "Educational.h"
#include "Children.h"
#include "Movie.h"
#include "Show.h"
#include "Time_.h"
#include "TVprogram.h"
using namespace std;
bool compare(const TVprogram* lhs, const TVprogram* rhs);
class DayProgram {
protected:
vector<TVprogram*> programs;
string date;
public:
DayProgram();
~DayProgram();
void setDate(string date);
string getDate() const&;
void show();
void add();
void findby();
void mysort();
void save(ofstream& file);
void load(ifstream& file);
};
