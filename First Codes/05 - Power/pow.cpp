#include <iostream>
using namespace std;

int pow (int b, int expo);

int main()
{
    int base, exponent;
    cout << "Enter the base:" << endl;
    cin >> base;
    cout << "Enter the exponent:" << endl;
    cin >> exponent;
    int result = pow(base, exponent);
    cout << base << " raised to " << exponent << " is equal to "<< result <<endl;
}

int pow(int b, int expo)
{
    if (expo > 0)
    {
        int resPow {b};

        for(int i {1}; i < expo; i++)
        {
            resPow *= b;
        }
        return resPow;
    }
    else
    {
        return 1;
    }
}
