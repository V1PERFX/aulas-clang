/*
Aula 2 - C, mas como ouve troca de professores,
essa foi a primeira aula da nova professora.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, n3;

  printf("Digite um numero: ");
  scanf("%d", &n1);

  printf("Digite outro numero: ");
  scanf("%d", &n2);

  printf("Digite um outro numero: ");
  scanf("%d", &n3);

  printf("A soma dos numeros foi: %d \n", (n1 + n2 + n3));

  return 0;
}