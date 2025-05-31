#include <stdio.h>
#include <string.h>

int main() {
  int M[9][9];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      scanf("%d", &M[i][j]);
    }
  }
  int valido = 1; //assume que o tabuleiro é valido até que se prove o contrário
  
  //verificar linha a linha
  for (int i = 0; i < 9 && valido; i++) {
    int freq[10] = {0}; //contador para os numeros de 1 a 9 na linha i; se um mesmo numero aparece mais de uma vez, considera a linha invalida
    for (int j = 0; j < 9; j++) {
      int val = M[i][j];
      if (val < 1 || val > 9 || freq[val]++) { //val <= 0 ou val >= 10 ou a freq de um numero ser mais que 1 gera invalidade do tabuleiro
        valido = 0; //tabuleiro invalido
        break;
      }
    }
  }

  //verificar coluna
  for (int j = 0; j < 9 && valido; j++) {
    int freq[10] = {0};
    for (int i = 0; i < 9 ; i++) {
      int val = M[i][j];
      if (val < 1 || val > 9 || freq[val]++) {
        valido = 0;
        break;
      }
    }
  }

  //verifica matriz 3x3
  for (int linha = 0; linha < 9 && valido; linha = linha + 3) { //indica canto superior esquerdo da submatriz 3x3
    for (int coluna = 0; coluna < 9 && valido; coluna = coluna + 3) { //indica canto superior esquerdo da submatriz 3x3
      //bloco superior: (0,0) (0,3) (0,6)
      //bloco central: (3,0) (3,3) (3,6)
      //bloco inferior: (6,0) (6,3) (6,6)
      int freq[10] = {0};
      for (int i = linha; i < linha + 3; i++) {
        for (int j = coluna; j < coluna + 3; j++) {
          int val = M[i][j];
          if (val < 1 || val > 9 || freq[val]++) {
            valido = 0;
            break;
          }
        }
      }
    }
  }

  //resultado
  printf("Instancia %d\n", n);
  if (valido) {
    pritnf("SIM\n\n");
  } else {
    printf("NAO\n\n");
  }
  return 0;
}
