#include <iostream>
#include "DayProgram.h"
#include <ostream>
using namespace std;
int main() {
DayProgram programs;
int menu = -1;
while (menu != 0) {
cout << "1 - Add\n2 - Sort\n3 - Search by\n4 - Save\n5 - Load\n6 - Show" << endl;
cout << "Your choice: ";
cin >> menu;
switch (menu) {
case 1: {
programs.add();
break;
}
case 2: {
programs.mysort();
break;
}
case 3: {
programs.findby();
break;
}
case 4: {
ofstream out;
string path;
cout << "Write path" << endl;
cin >> ws;
getline(cin, path);
out.open(path);
programs.save(out);
break;
}
case 5: {
ifstream in;
string path;
cout << "Write path" << endl;
cin >> ws;
getline(cin, path);
in.open(path);
programs.load(in);
break;
}
case 6: {
programs.show();
break;
}
}
}
return 0;
}