#include <iostream>
#include <cmath>
using namespace std;
void solve_quadratic(float a, float b, float c) {
  float d = b * b - 4 * a * c;
  if (d > 0) {
    float x1 = (-b + sqrt(d)) / (2 * a);
    float x2 = (-b - sqrt(d)) / (2 * a);
    cout << "rishehaye haqiqi va motevafet hastand" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  } else if (d == 0) {
    float x = -b / (2 * a);
    cout << "rishehaye haqiqi va barabarand." << endl;
    cout << "x1 = x2 = " << x << endl;
  } else { //
    float real = -b / (2 * a); //
    float imag = sqrt(-d) / (2 * a);
    cout << "rishehaye mokhtalet va motefavet hastand." << endl;
    cout << "x1 = " << real << " + " << imag << "i" << endl;
    cout << "x2 = " << real << " - " << imag << "i" << endl;
  }
}
int main() {
  float a, b, c;
  cout << "Moadele daraje dovom ax+b=y ast" << endl;
  cout << "a,b,c ra vared konid " << endl;
  cin >> a >> b >> c;
  solve_quadratic(a, b, c);
  return 0;
}
