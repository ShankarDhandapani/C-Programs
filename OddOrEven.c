#include <stdio.h>

int main(void) {
  int a;
  printf("Enter the number : ");
  scanf("%d", &a);
  if((a%2) == 0)
  {
    printf("Given number %d is Even.", a);
  }
  else
  {
    printf("Given number %d is Odd.", a);
  }
  return 0;
}
