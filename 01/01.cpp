#include <iostream>

using namespace std;

int main() {
  int index = 13, sum = 0, k = 0;

  while (k < index) {
    k += 1;
    sum += k;
  }

  cout << sum << endl;  // O resultado deverá ser a soma de uma progressão
                        // aritmética de 1 a 13, ou seja, 91.

  return 0;
}
