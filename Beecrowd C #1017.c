#include <stdio.h>
 
int main() {
  int tempo,velocidade;
  double litros;
  scanf("%d", &tempo);
  scanf("%d", &velocidade);
  litros = (tempo * velocidade) / 12.00;
  printf("%.3lf\n", litros);
  return 0;
}
