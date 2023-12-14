#include <iostream>
#include <string>
using namespace std;

int year;
int height;
int bounty;

int main()
{
    cout << "Enter your age: ";
    cin >> year;

    if (year <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;

        if (height < 100)
        {
            cout << "Your character = Chopper";
        }
        else if (height < 180)
        {
            cout << "Your character = Usopp";
        }

        else if (height >= 180)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
        }

        if (bounty > 1100000000)
        {
            cout << "Your character = Zoro";
        }
        else if (bounty <= 1100000000)
        {
            cout << "Your character = Sanji";
        }
    }
    else if (year <= 60)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;

        if (bounty > 500000000)
        {
            cout << "Your character = Jinbe";
        }
        else if (bounty <= 500000000)
        {
            cout << "Your character = Franky";
        }
    }
    else
    {
        cout << "Your character = Brook";
    }

    return 0;
}
