#include <stdio.h>

int main () {
  int a,b,c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a > b && a > c && b > c) { //a maior
    printf ("%d\n", c);
    printf ("%d\n", b);
    printf ("%d\n", a);
  } else if (a > c && a > b && c > b) {
    printf ("%d\n", b);
    printf ("%d\n", c);
    printf ("%d\n", a);
  } else if (b > a && b > c && a > c) { //b maior
    printf ("%d\n", c);
    printf ("%d\n", a);
    printf ("%d\n", b);
  } else if (b > c && b > c && c > a) { 
    printf ("%d\n", a);
    printf ("%d\n", c);
    printf ("%d\n", b);
  } else if (c > a && c > b && a > b) { //c maior
    printf ("%d\n", b);
    printf ("%d\n", a);
    printf ("%d\n", c);
  } else if (c > b && c > a && b > a) { 
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);
  }
  printf("\n"); //"pula uma linha"
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  return 0;
}
