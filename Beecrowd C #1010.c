#include <stdio.h>
 
int main() {
  int c1,n1,c2,n2;
  double vu1,vu2,VALOR;
  scanf("%d", &c1);
  scanf("%d", &n1);
  scanf("%lf", &vu1);
  scanf("%d", &c2);
  scanf("%d", &n2);
  scanf("%lf", &vu2);
  VALOR = (n1 * vu1) + (n2 * vu2);
  printf("VALOR A PAGAR: R$ %.2lf\n", VALOR);
  return 0;
}
