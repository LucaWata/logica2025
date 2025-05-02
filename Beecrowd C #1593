#include <stdio.h>
#include <string.h> //inclui biblioteca de manipulação de strings (como strlen e memmove)

// Função para dividir um número muito grande (em string[char *num_str]) por 2
int divide_by_2(char *num_str) {
    int len = strlen(num_str); //tamanho da string do numero
    int remainder = 0; //resto acumulado da divisão (começa com 0)
    for (int i = 0; i < len; i++) {
        int current = remainder * 10 + (num_str[i] - '0'); //pega o numero atual a ser dividido considerando o anterior e o remainder
        num_str[i] = (current / 2) + '0'; //atualiza numero atual (num_str[i]) com o resultado da divisão por 2
        remainder = current % 2; //calcula novo remainder (resto da divisão por 2)
    }
    // Remove zeros à esquerda
    while (num_str[0] == '0' && strlen(num_str) > 1) {
        memmove(num_str, num_str + 1, strlen(num_str)); // a função memmove move os caracteres uma posição para a esquerda
    }
    return remainder;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char num_str[1025];
        scanf("%s", num_str);

        int count = 0; //vai contabilizar a quantidade de 1's
        while (!(strlen(num_str) == 1 && num_str[0] == '0')) { //enquanto o numero não for zero
            int remainder = divide_by_2(num_str); //divide por 2 usando a primeira função
            if (remainder == 1) { //se o resto for 1(ou seja, o numero era impar antes da divisão) é incrementado +1 com count++
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
