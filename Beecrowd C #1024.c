#include <stdio.h>
#include <string.h>


int main () {
  int N;
  char texto[1001];
  scanf("%d", &N);
  getchar(); //descarta o \n inserido no momento em que o programa le o numero do scanf

  while (N--){ //diminui o valor de N em 1 qunado le os textos
    fgets(texto, 1001, stdin); //fgets le e conta o numero de caracteres do texto, inserido pela entrada teclado indicado por stdin
    
    texto[strcspn(texto, "\n")] = '\0'; //calcula o comprimento do segmento inicial de str1 que não contém nenhum dos caracteres da string str2.

    int len = strlen(texto); //calcula o tamanho da string

    //laço para avançar 3 casas
    for (int i = 0; i < len; i++) {
      if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')) { //verifica as letras do string, se forem avança +3 na tabela ASCII
        texto[i] = texto[i] + 3;
      }
    }

    //laco para inverter letras da string
    for (int i = 0; i < len / 2; i++) { //vai ate o meio pois apos o meio a troca ja foi feita
      char temp = texto[i];
      texto[i] = texto[len - 1 - i];
      texto[len - 1 - i] = temp;
    }

    //laco para a outra metade
    for (int i = len / 2; i < len; i++) { //len/2 -> metade da string
      texto[i] = texto[i] - 1;
    }
    printf("%s\n", texto);
  }
  return 0;
}
