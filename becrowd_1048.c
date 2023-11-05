#include <stdio.h>
#include <math.h>

int main() {

  float salary;
  float new_salary;
  float money_earned;
  float increase_percentual;

  scanf("%f", &salary);

  if (0<=salary && salary<=400.00) {

    new_salary = (float)(0.15*salary + salary);
    money_earned = new_salary-salary;
    increase_percentual = ((new_salary-salary)/salary)*100;
    
  }

  else if (400.01<=salary && salary<=800.00) {

    new_salary = (float)(0.12*salary + salary);
    money_earned = new_salary-salary;
    increase_percentual = ((new_salary-salary)/salary)*100;

  }

  else if (800.01<=salary && salary<=1200.00) {

    new_salary = (float)(0.10*salary + salary);
    money_earned = new_salary-salary;
    increase_percentual = ((new_salary-salary)/salary)*100;

  }

  else if (1200.01<=salary && salary<=2000.00) {

    new_salary = (float)(0.07*salary + salary);
    money_earned = new_salary-salary;
    increase_percentual = ((new_salary-salary)/salary)*100;

  }

  else if (salary>2000.00) {

    new_salary = (float)(0.04*salary + salary);
    money_earned = new_salary-salary;
    increase_percentual = ((new_salary-salary)/salary)*100;

  }

  printf("Novo salario: %.2f\n", new_salary);
  printf("Reajuste ganho: %.2f\n", money_earned);
  printf("Em percentual: %.0f %%\n", increase_percentual);

  return 0;
}

/*
450
Novo salario: 504.00
Reajuste ganho: 54.00
Em percentual: 12 %

1200
Novo salario: 1320.00
Reajuste ganho: 120.00
Em percentual: 10 %
*/