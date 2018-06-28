#include <stdio.h>

int main(void) {
  int year;
  printf("Enter the year : ");
  scanf("%d",&year);
  if((year % 4) == 0)
  {
    printf("The year %d is an Leap yeap.", year);
  }
  else
  {
    printf("The year %d is not an leap year.", year);
  }
  return 0;
}
