//3-1.cpp -- first input
//请注意，这里的字符常数就是赋给变量的值，要用单引号括起来。
//  char letter ='A';
#include <iostream>
int main()
{
    using namespace std;
    const int Asize = 20;
    char fname[Asize];
    char lname[Asize];
    char mgrade;   //如果只写char mgrade,默认是只能容纳1个英文字母，在输入的时候多于一个会报错。
//真是笨，char本来就只能容纳一个字符. 加中括号变成array了吧。
    int yage;


    cout << "What is your first name? ";
    cin.getline(fname, Asize);
    cout << "What is your last name? ";
    cin.getline(lname, Asize);    //我之前写的是(lname,Asize)  写作输出的时候没有，逗号后面一定要空格啊？
    cout << "What letter grade do you deserve? ";
    cin  >> mgrade;
    cout << "What is your age? ";
    cin >> yage;
    cout << "Name: " << lname << ", " << fname << endl;
    char sgrade = mgrade+1;
    cout << "Grade: " << sgrade << endl;
    cout << "Age: " << yage;

    return 0;
}
