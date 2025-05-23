#include <stdio.h>
#include <string.h>

int main () {
  char risada[51];
  char vogais[51];
  int palindromo = 1;
  int j = 0;

  scanf("%s", risada);

  //seleciona as vogais da risada
  for (int i = 0; risada[i] != '\0'; i++) { //continua enquanto nao encontrar \0
    if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
      vogais[j] = risada[i];
      j++;
    }
  }
  vogais[j] = '\0'; //finaliza string

  int tamanho = strlen(vogais); //verifica se é um palindromo
  for (int i = 0; i < tamanho / 2; i++) {
    if (vogais[i] != vogais[tamanho - 1 - i]) {
      palindromo = 0;
      break;
    }
  }
  if (palindromo) {
    printf("S\n");
  } else {
    printf("N\n");
  }
  return 0;
}
