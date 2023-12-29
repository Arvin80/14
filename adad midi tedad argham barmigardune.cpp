#include <iostream>
using namespace std;
int count_digits(int n) {
  int count = 0;
  while (n > 0) {
    count++;
    n /= 10;
  }
  return count;
}
int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;
  cout << "Tedad argham " << num << "Barabar ast ba: " << count_digits(num) << endl;
  return 0;
}
