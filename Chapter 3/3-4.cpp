//3-4.cpp -- convert time
#include <iostream>
int main()
{
    using namespace std;
    const int Hours_a_day = 24;
    const int Minutes_a_hour = 60;
    const int Seconds_a_minute = 60;

    long int firstseconds;

    cout << "Enter the number of seconds: ";
    cin >> firstseconds;
    int seminutes = firstseconds / Seconds_a_minute;
    int outseconds = firstseconds % Seconds_a_minute;
    int sehours = seminutes / Minutes_a_hour;
    int outminutes = seminutes % Minutes_a_hour;
    int outday = sehours / Hours_a_day;
    int outhours = sehours % Hours_a_day;
    cout << firstseconds << " seconds =" << outday << " days, " << outhours << " hours, " << outminutes << " minutes, "
         << outseconds << " seconds";

    return 0;
}
