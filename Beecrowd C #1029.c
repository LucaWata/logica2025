#include <stdio.h>

int num_calls; //variavel global que pode ser lida pelo codigo inteiro

int fibonacci(int x) { //função que vai ser chamada depois
  num_calls++; //irá contar (+1) cada vez que a função 'fibonacci' foi chamada
  if (x == 0) return 0;
  if (x == 1) return 1;
  return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
  int n_casos, x;
  scanf("%d", &n_casos);

  while (n_casos--) { //faz contagem de n_casos - 1
    scanf("%d", &x); //numero de fibonacii
    num_calls = -1;
    int resultado = fibonacci(x); //chama a função de cima (recursão)
    printf("fib (%d) = %d calls = %d\n", x, resultado, num_calls);
  }
  return 0;
}
