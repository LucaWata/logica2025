#include <stdio.h>
 
int main() {
  char NOME;
  double salario,venda,TOTAL;
  scanf("%s", &NOME);
  scanf("%lf", &salario);
  scanf("%lf", &venda);
  TOTAL = salario + (venda * 0.15);
  printf("TOTAL = R$ %.2lf\n", TOTAL);
  return 0;
}
