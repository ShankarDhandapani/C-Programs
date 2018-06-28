#include <stdio.h>

int main(void) {
  int radius = 0;
  printf("Enter the radius : ");
  scanf("%d",&radius);
  printf("Area = %d\nPerimeter = %d",(3.14*radius*radius),              (2*3.14*radius));
  return 0;
} 
