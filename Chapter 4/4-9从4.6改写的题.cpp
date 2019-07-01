//4.9 -- convert 4.6 to 4.9
#include <iostream>
struct CandyBar
{
    char name2[20];
    float weight2;
    int energy2;
};

int main()
{
    using namespace std;
    CandyBar * ssnack = new CandyBar;
    cout << "Enter your favorite name of snack: ";
    cin.getline(ssnack->name2, 20);
    cout << "Enter the weight(g): ";
    cin >>(*ssnack).weight2;
    cout << "Enter the energy(kcal): ";
    cin >> ssnack->energy2;
    cout << "Our new snack name is " << (*ssnack).name2 <<endl;  //ssnack->name2  or (*ssnack).name2
    cout << " and its weight are " << ssnack->weight2 << " g" << endl;
    cout << "The total calories are " << (*ssnack).energy2 << " kcal" << endl;
    return 0;
}
