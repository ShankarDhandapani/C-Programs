#include <stdio.h>

int main(void) {
  int num1, num2, temp;
  printf("Enter the two numbers : ");
  scanf("%d %d", &num1, &num2);
  printf("The numbers %d and %d is swaped as ", num1, num2);
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("%d and %d", num1, num2);
  return 0;
}
