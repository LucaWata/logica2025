#include <stdio.h>
#include <string.h>

int main() {
  int inteiro;
  float real;
  char caractere;
  char frase[50];
  scanf("%d", &inteiro);
  scanf("%f", &real);
  getchar();
  scanf(" %c", &caractere);
  getchar();
  fgets(frase, sizeof(frase), stdin);
  frase[strcspn(frase, "\n")] = 0;
  printf("%d%f%c%s\n", inteiro, real, caractere, frase);
  printf("%d\t%f\t%c\t%s\n", inteiro, real, caractere, frase);
  printf("%10d%10.6f%10c%10s\n", inteiro, real, caractere, frase);
  return 0;
}
