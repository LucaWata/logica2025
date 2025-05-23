#include <stdio.h>
#include <string.h>

int main () {
  int N;
  char texto[51];

  scanf("%d", &N); //numero de casos
  
  for (int i = 0; i < N; i++) {
    int deslocamento;
    scanf("%s", texto); //insere o texto
    scanf("%d", &deslocamento); //insere o quanto quer deslocar as letras
    
    int tamanho = strlen(texto); //conta a quantidade de caracteres

    for (int j = 0; j < tamanho; j++) {
      char letra = texto[j];
      char nova_letra = ((letra - 'A' - deslocamento + 26) % 26) + 'A'; 
      //letra - 'A' --> converte caractere em numero, seguindo tabela ASCII
      //- deslocamento --> desloca as letras
      //+26 --> garante nao haver negativos
      //%26 --> garante que o numero fique no intervao[0,25]
      //+ 'A' --> converte numero de volta a letra
      printf("%c", nova_letra);
    }
    printf("\n");
  }
  return 0;
}
