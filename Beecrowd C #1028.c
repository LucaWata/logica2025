#include <stdio.h>

int main() {
  int n_casos_teste;
  int f1, f2, MAX;
  scanf("%d", &n_casos_teste); // 1 <= n_casos_teste <= 3000
  for (int i = 0; i < n_casos_teste; i++) {
    scanf("%d", &f1); //1 <= f1 <= 1000
    scanf("%d", &f2); //1 <= f2 <= 1000

    MAX = 1;

    //comparar f1 e f2
    for (int j = 1; j <= (f1 < f2 ? f1 : f2); j++) { //inicializacao; condicao parada; incremento
      if (f2 % j == 0 && f1 % j == 0) {
        MAX = j;
      }
    }
    printf("%d\n", MAX);
  }
  return 0;
}
