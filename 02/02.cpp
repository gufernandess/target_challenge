#include <iostream>

using namespace std;

int main() {
  int predecessor = 0, current = 0, successor = 1;

  int input;

  cin >> input;

  while (current <= input) {
    if (current == input) {
      cout << "O número " << input << " pertence a sequência de Fibonacci."
           << endl;

      return 0;
    }

    else {
      current = predecessor + successor;
      predecessor = successor;
      successor = current;
    }
  }

  cout << "O número " << input << " NÃO pertence a sequência de Fibonacci."
       << endl;

  return 0;
}
