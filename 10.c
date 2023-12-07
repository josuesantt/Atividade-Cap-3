#include <stdio.h>

int main() {
  int a, r;

  // Leitura do valor de A
  printf("Digite o valor de A: ");
  scanf("%d", &a);

  // Cálculo do quadrado de A
  r = a * a;

  // Saída do resultado
  printf("%d ao quadrado é %d.\n", a, r);

  return 0;
}
