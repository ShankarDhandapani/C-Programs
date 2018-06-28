#include <stdio.h>

int main(void) {
  int a, b, c, d;
  printf("Enter four numbers : ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  a+=10;
  b-=10;
  c*=10;
  d/=10;
  printf("The new values are:");
  printf("\na = %d \nb = %d \nc = %d \nd = %d", a, b, c, d);
  return 0;
}
