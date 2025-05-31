#include <stdio.h>
#include <math.h>

int main () {
  int N,x,y,fr,fb,fc;
  scanf("%d", &N);
  while (N >= 1) {
    scanf("%d", &x);
    scanf("%d", &y);
    fr = pow((3*x),2) + pow(y,2);
    fb = 2 * pow(x,2) + pow((5 * y),2);
    fc = -100 * x + pow(y,3);
    if (fr > fb && fr > fc) {
      printf("Rafael ganhou\n");
    } else if (fb > fr && fb > fc) {
      printf("Beto ganhou\n");
    } else  if (fc > fb && fc > fr) {
      printf("Carlos ganhou\n");
    }
    N--;
  }
  return 0;
}
