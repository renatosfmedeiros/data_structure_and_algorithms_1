#include <stdio.h>
#include <math.h>

int main() {

  float a, b, c;
  scanf("%f%f%f", &a,&b,&c);

  float delta = (b*b) - (4*a*c);

  if (delta < 0 || a == 0) {
    printf("Impossivel calcular\n");
  }

  else if(delta > 0) {
    printf("R1 = %.5f\n", (float)((-b + sqrt(delta))/(2*a)));
    printf("R2 = %.5f\n", (float)((-b - sqrt(delta))/(2*a)));
  }

  else if (delta == 0) {

    printf("R2 = %.5f\n", (float)((-b - sqrt(0))/(2*a)));

  }
  return 0;
}


/*
6 13 6
R1 = -0.66667
R2 = -1.50000

4 -3 10
Impossivel calcular
*/