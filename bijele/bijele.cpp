#include <stdio.h>

int main() {
  int n;
  // king
  scanf("%d", &n);
  printf("%d ", 1 - n);
  // queen
  scanf("%d", &n);
  printf("%d ", 1 - n);
  // rooks
  scanf("%d", &n);
  printf("%d ", 2 - n);
  // bishops
  scanf("%d", &n);
  printf("%d ", 2 - n);
  // knights
  scanf("%d", &n);
  printf("%d ", 2 - n);
  // pawns
  scanf("%d", &n);
  printf("%d", 8 - n);

  return 0;
}
