#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int N;
  char texto[1001];
  int alfabeto[26];

  scanf("%d", &N);
  getchar(); //"consome" o \n inserido pelo scanf

  while (N--) {
    memset(alfabeto, 0, sizeof(alfabeto)); //zera o vetor de contagem

    fgets(texto, 1001, stdin); //le o texto inserido pelo teclado

    for (int i = 0; texto[i] != '\0'; i++) {
      if (isalpha(texto[i])) { //verifica se o caractere pertence ao alfabeto
        char letra = tolower(texto[i]); //torna as letras todas minusculas
        alfabeto[letra - 'a']++;
      }
    }
    int max = 0;
    for (int i = 0; i < 26; i++) {
      if (alfabeto[i] > max) {
        max = alfabeto[i];
      }
    }
    for (int i = 0; i < 26; i++) {
      if (alfabeto[i] == max) {
        printf("%c", i + 'a');
      }
    }
    printf("\n"); 
  }
  return 0;
}
