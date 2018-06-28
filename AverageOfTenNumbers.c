#include <stdio.h>

int main(void) {
  int count=0;
  float sum, average, numbers;
  printf("Enter 10 numbers : ");
  while(count<10)
  {
    scanf("%f",&numbers);
    sum = sum + numbers;
    count = count + 1;
  }
  average = sum/10;
  printf("The average of given numbers is %f and %f",sum, average);  
  return 0;
}
