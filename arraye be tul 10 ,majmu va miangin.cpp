#include <iostream>
using namespace std;
int main()
{
    int array[10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> array[i];
        sum += array[i];
    }
    double average = sum / 10.0;
    cout << "The sum of the array elements is: " << sum << endl;
    cout << "The average of the array elements is: " << average << endl;

    return 0;
}
