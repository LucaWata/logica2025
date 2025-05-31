#include <stdio.h>
#include <string.h>

int main(){
  int C; //C -> coluna
  double M[12][12];
  double soma;
  char T; //S -> soma | M -> media
  soma = 0;
  scanf("%d", &C);
  getchar(); //elimina /n do scanf
  scanf(" %c", &T); //%c -> le um unico caractere | %s -> le uma string de varios caracteres
  for (int i = 0; i < 12; i++) {  
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &M[i][j]);
    }
  }
  for (int i = 0; i < 12; i++) {
    soma = soma + M[i][C];
  }
  if (T == 'S') {
    printf("%.1lf\n", soma);
  } else if (T == 'M') {
    printf("%.1lf\n", soma/12);
  }
  return 0;
}
