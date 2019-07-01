//3-5.cpp -- proportion of people in US
#include <iostream>
int main()
{
    using namespace std;
    double worldp;
    double usp;

    cout << "Enter the world's population: ";
    cin >> worldp;
    cout << "Enter the population of the US: ";
    cin >> usp;
    float porp = usp / worldp;
    cout << "The population of the US is " << porp*100 << "% of the world population";
    return 0;
}
