#include <iostream>

using namespace std;

string flip(string f, int pos) {
  if (pos < 0) {
    return "";
  }
  return f[pos] + flip(f, pos - 1);
}

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  int i1 = stoi(flip(s1, s1.size() - 1));
  int i2 = stoi(flip(s2, s2.size() - 1));

  cout << (i1 > i2 ? i1 : i2);

  return 0;
}
