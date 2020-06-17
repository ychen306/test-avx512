#include <stdio.h>

void foo();
double a[8];
double b[8];
double c[8];

int main() {
  for (int i = 0; i < 8; i++) {
    a[i] = i;
    b[i] = i;
  }
  foo();
  for (int i = 0; i < 8; i++)
    printf("%f ", c[i]);
  printf("\n");
}
