//3-3.cpp -- latitude: degrees, minutes and seconds.
#include <iostream>
int main()
{
    using namespace std;
    const float Convertnumber = 60;
    float firstdegrees;
    float firstminutes;
    float firstseconds;

    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> firstdegrees;                     //cin能让输入直接进入下一行而不用endl了啊
    cout << "Next, enter the minutes of arc: ";
    cin >> firstminutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> firstseconds;

    float selatitude = firstdegrees + (firstminutes / Convertnumber) + (firstseconds / Convertnumber / Convertnumber);
    cout << firstdegrees << " degrees,"
         << firstminutes << " minutes,"
         << firstseconds << " seconds,"
         << " = "
         << selatitude
         << " degrees";

    return 0;


}
