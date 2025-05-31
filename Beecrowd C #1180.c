int main(){
  int N,i,aux1,aux2;
  int *ptrx; //ponteiro
  int X[1000];
  ptrx = &aux1; //o ponteiro resgata o valor de aux1
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d", &X[i]); //cada valor inserido armazena no array correspondente ao valor de i
  }
  aux1 = X[0]; //armazena o valor da posição 0 do array
  aux2 = 0;
  for (i = 1; i < N; i++) {
    if (X[i] < aux1) { //no primeiro caso, verifica se o numero no vetor [1] é menor que aux1, se não:
      aux1 = X[i]; //no primeiro caso, aux1 recebe o valor de vetor 1
      aux2 = i; //aux2 recebe valor de i = 1, nesse caso
    }
  }
  printf("Menor valor: %d\n", *ptrx);
  printf("Posicao: %d\n", aux2);
  return 0;
}
