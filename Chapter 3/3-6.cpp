//3-6.cpp -- the miles per gallon
#include <iostream>
int main()
{
    using namespace std;
    float diskm;
    float petrolliter;

    cout << "Enter the distance in kilometers you have driven: ";
    cin >> diskm;
    cout << "Enter the petrol in liters your car has gotten: ";
    cin >> petrolliter;

    float prop = petrolliter / (diskm / 100) ;
    cout << prop << " in liters per 100 kilometers.";
    return 0;

}
