#include <stdio.h>
 
int main() {
  int distancia;
  scanf("%d", &distancia);
  distancia = (60 * distancia) / 30;
  printf("%d minutos\n", distancia);
  return 0;
}
