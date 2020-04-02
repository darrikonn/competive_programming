#include <iostream>

int getQuadrant(int n1, int n2) {
  if (n1 > 0) {
    if (n2 > 0) {
      return 1;
    }
    return 4;
  } else if (n2 > 0) {
    return 2;
  }
  return 3;
}

int main() {
  int n1, n2;
  scanf("%d", &n1);
  scanf("%d", &n2);

  printf("%d", getQuadrant(n1, n2));
}
