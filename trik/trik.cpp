#include <iostream>
#include <stdio.h>

int main() {
  std::string s;
  bool b[3] = {true, false, false};
  std::cin >> s;

  for (size_t i = 0; i < s.length(); i++) {
    switch(s[i]) {
      case 'A':
        if (!b[2]) {
          b[0] = !b[0];
          b[1] = !b[1];
        }
        break;
      case 'B':
        if (!b[0]) {
          b[1] = !b[1];
          b[2] = !b[2];
        }
        break;
      case 'C':
        if (!b[1]) {
          b[0] = !b[0];
          b[2] = !b[2];
        }
        break;
    }
  }
  printf("%d", b[0] ? 1 : (b[1] ? 2 : 3));

  return 0;
}
