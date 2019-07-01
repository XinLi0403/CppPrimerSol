//4.3.cpp
#include <iostream>
#include <cstring>
int main ()
{
    using namespace std;
    char fname[20];
    string lname;

    cout << "Enter your first name: ";
    cin.getline(fname, 20);
    cout << "Enter your last name: ";
    getline(cin, lname);
    cout << "Here's the information in a single string: ";
    cout << lname << ", " << fname;
    return 0;

}

//4.3和4.4  整体是一样的，主要是char和string的区别
