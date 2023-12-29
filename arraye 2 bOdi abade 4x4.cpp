int arr[4][4];
#include <cstdlib>
int main(){
for (int i = 0; i < 4; i++) {
  for (int j = 0; j < 4; j++) {
    arr[i][j] = rand() % 100 + 1;
  }
}
#include <iostream>
std::cout << "آرایه دو بعدی:\n";
for (int i = 0; i < 4; i++) {
  for (int j = 0; j < 4; j++) {
    std::cout << arr[i][j] << "\t";
  }
  std::cout << "\n";
}
std::cout << "عناصر قطر اصلی:\n";
for (int i = 0; i < 4; i++) {
  std::cout << arr[i][i] << "\t";
}
  std::cout << "\n";
  return 0;
}
