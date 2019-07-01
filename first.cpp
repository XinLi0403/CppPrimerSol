// first.cpp -- converts furlongs to yards
#include <iostream>
int furlongtoyard(int);     // function prototype
int main()
{
    using namespace std;
    int furlongs;
    cout << "Enter the length in furlongs:";
    cin >> furlongs;
    int yards = furlongtoyard(furlongs);
    cout << furlongs
         << " furlongs = ";
    cout << yards
         << " yards."
         << endl;
    return 0;
}

int furlongtoyard(int sts)

{
    return 220 * sts;
}
