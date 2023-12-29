#include <iostream>
using namespace std;
int main() {
    int array[100];
    cout << "100 adad vared konid: " << endl;
    for (int i = 0; i < 100; i++) {
        cin >> array[i];
    }
    cout << "Anasore mazrabe 3: " << endl;
    for (int i = 0; i < 100; i++) {
        if (array[i] % 3 == 0) {
            cout << array[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
