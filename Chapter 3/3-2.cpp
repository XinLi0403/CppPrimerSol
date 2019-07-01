//3-2.cpp  -- calculate BMI.
#include <iostream>
int main()
{
    using namespace std;
    const float Inch_to_meter = 0.0254;
    const float Kg_to_pounds = 2.2;
    const float Feet_to_inch = 12;
    float firstinches;
    float firstfeet;
    float firstpounds;

    cout << "Enter your height in inches: ";
    cin >> firstinches;
    cout << "Enter your height in feet: ";
    cin >> firstfeet;
    cout << "Enter your weight in pounds: ";
    cin >> firstpounds;

    float meters = (firstinches+firstfeet*Feet_to_inch)*Inch_to_meter;
    float kgs = firstpounds / Kg_to_pounds;
    float BMI = kgs/meters/meters;

    cout << "Your BMI is: " << BMI << endl;

    return 0;
}
