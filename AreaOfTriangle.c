#include <stdio.h>
#include <math.h>

int main(void) {
  int a,b,c,surface = 0, area = 0;
  printf("Enter the three sides : ");
  scanf("%d %d %d", &a, &b, &c);
  surface = (a+b+c)/2;
  area = sqrt((surface*(surface-a)*(surface-b)*(surface-c)));
  printf("The Area of the Triangle is %d",area);
  return 0;
}
