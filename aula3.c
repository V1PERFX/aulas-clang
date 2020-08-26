// revisao da aula 2
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, result;

  printf("Digite um numero: ");
  scanf("%d", &n1);

  printf("Digite outro numero: ");
  scanf("%d", &n2);

  result = n1 + n2;

  printf("A soma dos numeros foi: %d.\n", result);

  result = n1 - n2;

  printf("A soma dos numeros foi: %d.\n", result);

  return 0;
}

// exercio proposto pela professora só com if else
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, opc;

  printf("Digite um numero: ");
  scanf("%d", &n1);

  printf("Digite outro numero: ");
  scanf("%d", &n2);

  printf("Escolha uma Operação: 1-soma 2-subtração 3-multiplicação 4-divisão: ");
  scanf("%d", &opc);

  if (opc == 1) {
    printf("A soma dos numeros foi: %d.\n", (n1 + n2));
  } else if (opc == 2) {
    printf("A subtração dos numeros foi: %d.\n", (n1 - n2));
  } else if (opc == 3) {
    printf("A multiplicação dos numeros foi: %d.\n", (n1 * n2));
  } else if (opc == 4) {
    printf("A divisão dos numeros foi: %d.\n", (n1 / n2));
  } else {
    printf("Operação Inválida!!!\n");
  }

  return 0;
}

// exercio proposto pela professora com switch case
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, opc;

  printf("Digite um numero: ");
  scanf("%d", &n1);

  printf("Digite outro numero: ");
  scanf("%d", &n2);

  printf("Escolha uma Operação: 1-soma 2-subtração 3-multiplicação 4-divisão: ");
  scanf("%d", &opc);

  switch(opc) {
    case 1:
      printf("A soma dos numeros foi: %d.\n", (n1 + n2));
      break;
    case 2:
      printf("A subtração dos numeros foi: %d.\n", (n1 - n2));
      break;
    case 3:
      printf("A multiplicação dos numeros foi: %d.\n", (n1 * n2));
      break;
    case 4:
      printf("A divisão dos numeros foi: %d.\n", (n1 / n2));
      break;
    default:
      printf("Operação Inválida!!!\n");
      break;
  }

  return 0;
}

// exercio proposto pela professora repetição while
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n1, n2, opc, sair;

  while(sair == 0)
  {
    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    printf("Escolha uma Operação: 1-soma 2-subtração 3-multiplicação 4-divisão: ");
    scanf("%d", &opc);

    switch(opc) {
      case 1:
        printf("A soma dos numeros foi: %d.\n", (n1 + n2));
        break;
      case 2:
        printf("A subtração dos numeros foi: %d.\n", (n1 - n2));
        break;
      case 3:
        printf("A multiplicação dos numeros foi: %d.\n", (n1 * n2));
        break;
      case 4:
        printf("A divisão dos numeros foi: %d.\n", (n1 / n2));
        break;
      default:
        printf("Operação Inválida!!!\n");
    }
    printf("Deseja realizar outra operação? 0-sim 9-não ");
    scanf("%d", &sair);
  }
  return 0;
}