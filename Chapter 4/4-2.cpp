//4-2.cpp -- Listing4.4 convert to string
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string str1;
    string str2;

    cout << "Enter your name:\n";
    getline(cin, str1);   // ��֮ǰд�� cin.str1 ��  ��������Xin Li�����м��пո�ģ�����getline()
    cout << "Enter your favorite dessert:\n";
    getline(cin, str2);
    cout << "I have some delicious " << str2;
    cout << " for you, " << str1 << ".\n";
    return 0;
}
