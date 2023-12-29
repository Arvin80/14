#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double base, exponent;
    cout << "Enetr 2 number: ";
    cin >> base >> exponent;
    double result = pow(base, exponent);
    cout << base << " Be tavan " << exponent << " Barabar ast ba " << result << endl;
    return 0;
}
