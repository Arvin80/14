#include <iostream>
using namespace std;
void print_min_max(int arr[3][4]) {
  int min = arr[0][0];
  int max = arr[0][0];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (arr[i][j] < min) {
        min = arr[i][j];
      }
      if (arr[i][j] > max) {
        max = arr[i][j];
      }
    }
  }
  cout << "min Onsor: " << min << endl;
  cout << "max Onsor: " << max << endl;
}
int main() {
  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  print_min_max(arr);

  return 0;
}
