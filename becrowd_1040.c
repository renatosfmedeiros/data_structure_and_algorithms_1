#include <stdio.h>
int main() {
  
  float n1, n2, n3, n4, average;
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  
  average = (2*n1 + 3*n2 + 4*n3 + 1*n4)/(2+3+4+1);

  printf("Media: %.1f\n", (float) average);

  if (average >= 7.0) {
    printf("Aluno aprovado.\n");
  }
    
  else if (average < 5.0) {
    printf("Aluno reprovado.\n");
  }
    
  else if (5.0 <= average && average <= 6.9) {
    printf("Aluno em exame.\n");

    scanf("%f", &n1);
    printf("Nota do exame: %.1f\n", (float) n1);

    average = (average + n1)/2;

    if (average >= 5.0) {
      printf("Aluno aprovado.\n");
    }
      
    else if (average <= 4.9) {
      printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1f\n", (float) average);    
    
  }

  return 0;
}

/*
2.0 4.0 7.5 8.0 6.4
Media: 5.4
Aluno em exame.
Nota do exame: 6.4
Aluno aprovado.
Media final: 5.9
*/