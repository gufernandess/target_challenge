#include <iostream>
#include <string>

using namespace std;

void recursive_reverse(string &str, int begin, int end) {
  if (begin >= end)
    return;

  else {
    str[begin] += str[end] - (str[end] = str[begin]);

    return recursive_reverse(str, begin + 1, end - 1);
  }
}

int main() {
  string str;

  cin >> str;

  recursive_reverse(str, 0, str.size() - 1);

  cout << str << endl;

  return 0;
}
