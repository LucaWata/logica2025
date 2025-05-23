#include <stdio.h>
 
int main() {
  int h1,NUMBER;
  double v3,SALARY;
  scanf("%d", &NUMBER);
  scanf("%d", &h1);
  scanf("%lf", &v3);  
  SALARY = v3*h1;
  printf("NUMBER = %d\n", NUMBER);
  printf("SALARY = U$ %.2lf\n", SALARY);
  return 0;
}
