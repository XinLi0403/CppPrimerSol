//4.6,cpp -- input of 4.5
#include <iostream>

struct CandyBar
{
    char name[20];
    float weight;
    int energy;
};

int main()
{
    using namespace std;
    CandyBar snack =
    {
    }; // 书上我没找到怎么声明的时候是空的，然后后面输入的。这可能是一个隐患。我是凭猜测这么写的
    cout << "Enter your favorite name of snack: ";
    cin >> snack.name;
    cout << "Enter the weight: ";
    cin >> snack.weight;
    cout << "Enter the energy: ";
    cin >> snack.energy;
    cout << "Our new snack name is " << snack.name <<endl;
    cout << " and its weight is " << snack.weight << endl;
    cout << "the calories are " << snack.energy;
    return 0;
}
