//2-5.cpp   //convert Celsius to Fahrenheit
#include<iostream>
double LighttoAstro(double);   //function prototype
int main()
{
    using namespace std;
    double LightDis;
    cout << "Enter the number of light years: ";
    cin >> LightDis;
    double AstroDis=LighttoAstro(LightDis);
    cout << LightDis
         << " light years = "
         << AstroDis
         << " astronomical units."
         << endl;
    return 0;
}

double LighttoAstro(double s)
{
    return 63240*s;
}
