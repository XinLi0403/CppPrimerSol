//3-1.cpp -- first input
//��ע�⣬������ַ��������Ǹ���������ֵ��Ҫ�õ�������������
//  char letter ='A';
#include <iostream>
int main()
{
    using namespace std;
    const int Asize = 20;
    char fname[Asize];
    char lname[Asize];
    char mgrade;   //���ֻдchar mgrade,Ĭ����ֻ������1��Ӣ����ĸ���������ʱ�����һ���ᱨ��
//���Ǳ���char������ֻ������һ���ַ�. �������ű��array�˰ɡ�
    int yage;


    cout << "What is your first name? ";
    cin.getline(fname, Asize);
    cout << "What is your last name? ";
    cin.getline(lname, Asize);    //��֮ǰд����(lname,Asize)  д�������ʱ��û�У����ź���һ��Ҫ�ո񰡣�
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
