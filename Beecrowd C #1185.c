#include <stdio.h>
#include <string.h>

int main() {
  double M[12][12];
  char O;
  double soma;
  soma = 0;
  scanf(" %c", &O);
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &M[i][j]);
    }
  }
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j + i < 11; j++) //le numeros acima da diagonal secundaria
    soma = soma + M[i][j];
  }
  if (O == 'S') {
    printf("%.1lf\n", soma);
  } else if (O == 'M') {
    printf("%.1lf\n", soma/66);
  }
  return 0;
}
