#include <iostream>
using namespace std;
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}

int main() {
  int x, y;
  cout << "دو عدد را وارد کنید: ";
  cin >> x >> y;
  cout << "بزرگترین مقسوم علیه مشترک " << x << " و " << y << " برابر است با: " << gcd(x, y) << endl;
  cout << "کوچکترین مضرب مشترک " << x << " و " << y << " برابر است با: " << lcm(x, y) << endl;
  return 0;
}
