#include <iostream>
using namespace std;
int main() {
  int arr[100];
  for (int i = 0; i < 100; i++) {
    arr[i] = rand() % 100;
  }
  cout << "Anasori ke meghdaresh ba andisesh barabare:\n";
  for (int i = 0; i < 100; i++) {
    if (arr[i] == i) {
      cout << i << " ";
    }
  }
  cout << "\n";

  return 0;
}
