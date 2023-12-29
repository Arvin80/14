#include <iostream>
using namespace std;
int complete(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;
    int result = complete(x);
    if (result == 1) {
        cout << x << " yek adad kamel ast." << endl;
    } else {
        cout << x << "yek adad kamel nist." << endl;
    }
    return 0;
}
