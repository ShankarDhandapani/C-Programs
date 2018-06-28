#include <stdio.h>

int main(void) {
  int num, j = 0,flag = 0;
  printf("Enter the number : ");
  scanf("%d",&num);
  if(num <= 1)
  {
    printf("The number %d is not the prime number.",num);
  }
  for(j=2;j<=num/2;j++)
  {
    if((num%j) == 0)
    {
      flag = 1;
      break;
    }
  }
  if(flag == 1)
  {
    printf("The number %d is not a prime number", num);
  }
  else{
    printf("The number %d is a prime number.", num);
  }
  return 0;
}
