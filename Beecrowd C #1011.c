#include <stdio.h>
 
int main() {
  double VOLUME,raio,pi;
  pi = 3.14159;
  scanf("%lf", &raio);
  VOLUME = (4.0/3.0) * pi * pow(raio,3.0);
  printf("VOLUME = %.3lf\n", VOLUME);
  return 0;
}
