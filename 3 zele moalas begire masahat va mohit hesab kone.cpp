#include <iostream>
#include <cmath>
using namespace std;
double semiPerimeter(double a, double b, double c) {
    return (a + b + c) / 2;
}
double area(double a, double b, double c) {
    double s = semiPerimeter(a, b, c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    double a, b, c;
    cout << "Enter the length of the first side: ";
    cin >> a;
    cout << "Enter the length of the second side: ";
    cin >> b;
    cout << "Enter the length of the third side: ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        double area =(a, b, c);
        cout << "The perimeter of the triangle is " << perimeter << endl;
        cout << "The area of the triangle is " << area << endl;
    }
    else {
        cout << "The sides do not form a valid triangle." << endl;
    }
    return 0;
}
