#include "DayProgram.h"

DayProgram::DayProgram() {}

DayProgram::~DayProgram() {}

void DayProgram::setDate(string date) {
this->date = date;
}

string DayProgram::getDate() const& {
return date;
}

void DayProgram::show() {
vector<TVprogram*>::iterator it;
for (it = programs.begin(); it != programs.end(); it++) {
cout << (*it)->toString();
cout << endl;
}
}

void DayProgram::add() {
int menu = -1;
cout << "1 - Add educational \n2 - Add Movie\n3 - Add Show\n4 - Add Children" << endl;
cin >> menu;
switch (menu) {
case 1: {
string q1, q2;
int ho, mi;
cout << "Enter science: " << endl;
cin >> ws;
getline(cin, q1);
cout << "Enter name:" << endl;
cin >> ws;
getline(cin, q2);
cout << "Enter hours:" << endl;
cin >> ho;
cout << "Enter minutes:" << endl;
cin >> mi;
try {
vector<TVprogram*>::iterator it;
for (it = programs.begin(); it != programs.end(); it++) {
if ((*it)->getTime() == Time_(ho, mi, 0)) {
throw;
}
}
}
catch (string temp) {
temp = "Show booked for this time";
cout << temp << endl;
}
programs.push_back(new Educational(q1, q2, Time_(ho, mi, 0)));
break;
}
case 2: {
string q1, q2;
int ho, mi, ye;
cout << "Enter description: " << endl;
cin >> ws;
getline(cin, q1);
cout << "Enter name:" << endl;
cin >> ws;
getline(cin, q2);
cout << "Enter hours:" << endl;
cin >> ho;
cout << "Enter minutes:" << endl;
cin >> mi;
cout << "Enter year:" << endl;
cin >> ye;
try {
vector<TVprogram*>::iterator it;
for (it = programs.begin(); it != programs.end(); it++) {
if ((*it)->getTime() == Time_(ho, mi, 0)) {
throw;
}
}
}
catch (string temp) {
temp = "Show booked for this time";
cout << temp << endl;
}
programs.push_back(new Movie(q1, ye, q2, Time_(ho, mi, 0)));
break;
}
case 3: {
string q1, q2;
int ho, mi;
cout << "Enter theme:" << endl;
cin >> ws;
getline(cin, q1);
cout << "Enter name:" << endl;
cin >> ws;
getline(cin, q2);
cout << "Enter hours:" << endl;
cin >> ho;
cout << "Enter minutes:" << endl;
cin >> mi;
try {
vector<TVprogram*>::iterator it;
for (it = programs.begin(); it != programs.end(); it++) {
if ((*it)->getTime() == Time_(ho, mi, 0)) {
throw;
}
}
}
catch (string temp) {
temp = "Show booked for this time";
cout << temp << endl;
}
programs.push_back(new Show(q1, q2, Time_(ho, mi, 0)));
break;
}
case 4: {
string q2;
int ho, mi, minim, maxim;
cout << "Enter min age:" << endl;
cin >> minim;
cout << "Enter max age:" << endl;
cin >> maxim;
cout << "Enter name:" << endl;
cin >> ws;
getline(cin, q2);
cout << "Enter hours:" << endl;
cin >> ho;
cout << "Enter minutes:" << endl;
cin >> mi;
try {
vector<TVprogram*>::iterator it;
for (it = programs.begin(); it != programs.end(); it++) {
if ((*it)->getTime() == Time_(ho, mi, 0)) {
throw;
}
}
}
catch (string temp) {
temp = "Show booked for this time";
cout << temp << endl;
}
programs.push_back(new Children(minim, maxim, q2, Time_(ho, mi, 0)));
break;
}
}
}

void DayProgram::findby() {
int menu = -1;
cout << "1 - Search by program type\n2 - Search by name program type\n3 - Search by time program type" << endl;
cin >> menu;
switch (menu) {
case 1: {
vector<TVprogram*>::iterator it;
string type;
cout << "Enter type to find:" << endl;
cin >> ws;
getline(cin, type);
for (it = programs.begin(); it != programs.end(); it++) {
if ((*it)->type() == type) {
cout << (*it)->toString();
}
}
break;
}
	case 2: {
vector<TVprogram*>::iterator it;
string name;
cout << "Enter name to find:" << endl;
cin >> ws;
getline(cin, name);
for (it = programs.begin(); it != programs.end(); it++) {
if ((*it)->getname() == name) {
cout << (*it)->toString();
}
}
break;
}
case 3: {
vector<TVprogram*>::iterator it;
int ho, mi;
cout << "Enter hours: " << endl;
cin >> ho;
cout << "Enter minutes: " << endl;
cin >> mi;
for (it = programs.begin(); it != programs.end(); it++) {
if ((*it)->getTime() == Time_(ho, mi, 0)) {
cout << (*it)->toString();
}
}
break;
}
}
}

void DayProgram::mysort() {
sort(programs.begin(), programs.end(), compare);
}

bool compare(const TVprogram* lhs, const TVprogram* rhs) {
return lhs->getTime() < rhs->getTime();
}

void DayProgram::save(ofstream& file) {
if (file.is_open()) {
vector<TVprogram*>::iterator it;
bool temp = false;
for (it = programs.begin(); it != programs.end(); it++) {
cout << (*it)->toString() << endl;
cout << "This ?" << endl;
cin >> temp;
if (temp) {
file << (*it)->type() << endl;
file << (*it)->getTime() << endl;
file << (*it)->getname() << endl;
break;
}
}
}
}
void DayProgram::load(ifstream& file) {
string name, temp;
int ho, mi;
getline(file, name);
file >> ho;
file >> temp;
file >> mi;
}
