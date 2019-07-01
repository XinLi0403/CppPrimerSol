//4.5,cpp -- structure members
#include <iostream>

struct CandyBar
{
    char name[20];
    float weight;
    int energy;
};

int main()
{
    using namespace std;
    CandyBar snack =
    {
      "Mocha Munch",
      2.3,
      350
    };
    cout << "Our new snack name is " << snack.name <<endl;
    cout << " and its weight is " << snack.weight << endl;
    cout << "the calories are " << snack.energy;
    return 0;
}
