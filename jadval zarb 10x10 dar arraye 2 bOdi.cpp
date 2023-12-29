#include <iostream>
using namespace std;
int main()
{
    int array[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = (i + 1) * (j + 1);
        }
    }

    cout << "Anasore setun 5:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array[i][4] << " ";
    }
    cout << endl;

    return 0;
}
