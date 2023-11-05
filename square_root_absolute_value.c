#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int number;
  scanf("%d", &number);

  if (number >= 0 ) {
    printf("Square root of the number:\n");
    printf("%.2f\n", (float) sqrt(number));    
  }

  else if (number < 0) {
    printf("There is no square root for a negative number, in the set of real numbers.\n");
  }

  printf("Abolute value of the number:\n");
  printf("%d\n", abs(number));

  return 0;
}

/*
81
Square root of the number:
9.00
Abolute value of the number:
81

-81
There is no square root for a negative number, in the set of real numbers.
Abolute value of the number:
81
*/