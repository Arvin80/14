#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, max;
    cout << "Please enter two numbers: " << endl;
    cin >> a >> b;
    max = (a + b + abs(a - b)) / 2;
    cout << "The maximum of " << a << " and " << b << " is " << max << endl;
    return 0;
}
