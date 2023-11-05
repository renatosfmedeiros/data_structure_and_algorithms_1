#include <stdio.h>
int main() {
  int a, b;
  scanf("%d %d", &a,&b);

  if ((24-a+b) < 24) {
    printf("O JOGO DUROU %d HORA(S)\n", (24-a+b));
  }

  else if ((24-a+b) > 24) {
    printf("O JOGO DUROU %d HORA(S)\n", b-a);
  }
  else {
    printf("O JOGO DUROU 24 HORA(S)\n");
  }

  return 0;
}

/*
16 2
O JOGO DUROU 10 HORA(S)
2 16
O JOGO DUROU 14 HORA(S)
0 0
O JOGO DUROU 24 HORA(S)
*/