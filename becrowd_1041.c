#include <stdio.h>
int main() {
  float x, y;
  scanf("%f %f", &x, &y);
  if (x == 0 && y == 0) {
    printf("Origem\n");
  }
  else if (x != 0 && y == 0) {
    printf("Eixo X\n");

  }
  else if (x == 0 && y != 0) {
    printf("Eixo Y\n");
  }
  else if (x > 0 && y > 0) {
    printf("Q1\n"); 
  }
  else if (x < 0 && y > 0) {
    printf("Q2\n");    
  }
  else if (x < 0 && y < 0) {
    printf("Q3\n");
  }
  else if (x > 0 && y < 0) {
    printf("Q4\n");
  }
  return 0;
}


/*
0 0
Origem
0 10
Eixo Y
10 0
Eixo X
10 10
Q1
-10 10
Q2
-10 -10
Q3
10 -10
Q4
*/