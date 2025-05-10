#include <stdio.h>

int main() {
  int numero_casos,numero_fibonacci,i;
  long long fib[61]; //delimita espaço para os 60 primeiros nummeros de fibonacci
  fib[0] = 0;
  fib[1] = 1;
  scanf("%d", &numero_casos);
  for (i = 2; i <=60; i++) { //calcula os 60 primeiros numeros de fibonacci
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  for (i = 0; i < numero_casos; i++) {
    scanf("%d", &numero_fibonacci);
    printf("Fib(%d) = %lld\n", numero_fibonacci, fib[numero_fibonacci]);
  }
  return 0;
}
