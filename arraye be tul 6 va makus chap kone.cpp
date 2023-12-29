#include <iostream>
using namespace std;

int main(){
    int arr[6];
    cout << "6 adad vared konid: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cout << "Araye makus shode: " << endl;
    for (int i = 5; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
