//4.8.cpp -- new for 4.7   非常典型的题目
#include <iostream>
struct pizzainfo
{
    char name[20];
    float diapizza;
    float weightpizza;
};

int main()
{
    using namespace std;
    pizzainfo * fpizza = new pizzainfo;
    cout << "Enter the name of the pizza company: ";
    cin.getline(fpizza->name, 20);
    cout << "Enter the diameter of the pizza: ";
    cin >> (*fpizza).diapizza;
    cout << "Enter the weight of the pizza: ";
    cin >> fpizza->weightpizza;
    cout << "The name of the pizza company is " << (*fpizza).name << endl;
    cout << "The diameter of the pizza is " << fpizza->diapizza << endl;
    cout << "The weight of the pizza is " << fpizza->weightpizza << endl;
    delete fpizza;
    return 0;
}
