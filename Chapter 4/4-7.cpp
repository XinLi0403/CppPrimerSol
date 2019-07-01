//4.7.cpp -- structure for pizza
#include <iostream>

struct pizzaforinfo
{
    char name[20];
    float diapizza;
    float weightpizza;
};

int main()
{
    using namespace std;
    pizzaforinfo firstpizza =
    {

    };

    cout << "Enter the name of the pizza company: ";
    cin.getline(firstpizza.name, 20);
    cout << "Enter the diameter of the pizza (cm): ";
    cin >> firstpizza.diapizza;
    cout << "Enter the weight of the pizza (g): ";
    cin >> firstpizza.weightpizza;

    cout << "Your record of the name of pizza company is " << firstpizza.name << endl;
    cout << "The diameter of the pizza is " << firstpizza.diapizza << " cm" << endl;
    cout << "The weight of the pizza is " << firstpizza.weightpizza << " g"<< endl;
    return 0;
}
