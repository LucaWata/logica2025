#include <stdio.h>
#include <math.h>

int main () {
  double a,b,c,p;
  double PI,r1,r2,Av,As,Ar,At,AT;
  PI = 3.1415926535897;
  while (scanf("%lf" "%lf" "%lf", &a, &b, &c) == 3) {
    p = (a + b + c) / 2.0;
    AT = sqrt(p*(p-a)*(p-b)*(p-c)); //AT --> area triangulo
    r2 = AT / p;
    Ar = PI * pow(r2,2); //Ar --> area roses
    r1 = (a * b * c) / (4.0 * AT);
    At = PI * pow(r1,2); //At --> area total
    As = At - AT; //As --> area sunflowers
    Av = AT - Ar; //Av --> area violets
    printf("%.4lf %.4lf %.4lf\n", As, Av, Ar);
  }
}
