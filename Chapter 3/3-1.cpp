//3-1.cpp -- convert inches to feet
#include <iostream>
int main()
{
    using namespace std;
    const int Inch_to_foot = 12.0;
    int oneinch;

    cout << "Enter your height in inches: ";
    cin >> oneinch;
    int seinch = oneinch % Inch_to_foot;
    int sefeet = oneinch / Inch_to_foot;
    cout << oneinch << " inches are "
         << sefeet << " feet."
         << seinch  << " inches, "
         << endl;
         return 0;

}
