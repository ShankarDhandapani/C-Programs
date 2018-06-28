#include <stdio.h>
#include <math.h>

int main(void) {
  float area = 0,volume = 0,side;
  printf("Enter the Side : ");
  scanf("%d",&side);
  area = 6 * side * side;
  volume = pow(side,3);
  printf("Area = %d\nVolume = %d", area, volume);
  return 0;
}
