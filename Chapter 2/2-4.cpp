//2-4.cpp   //convert years to months
#include<iostream>
int yeartomonth(int);   //function prototype
int main()
{
    using namespace std;
    int years;
    cout << "Enter your age: ";
    cin >> years;
    int months=yeartomonth(years);
    cout << "Your age in months is " << months << endl;
    return 0;
}

int yeartomonth(int s)
{
    return 12*s;
}
