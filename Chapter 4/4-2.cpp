//4-2.cpp -- Listing4.4 convert to string
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string str1;
    string str2;

    cout << "Enter your name:\n";
    getline(cin, str1);   // 我之前写成 cin.str1 了  不能输入Xin Li这种中间有空格的，得用getline()
    cout << "Enter your favorite dessert:\n";
    getline(cin, str2);
    cout << "I have some delicious " << str2;
    cout << " for you, " << str1 << ".\n";
    return 0;
}
