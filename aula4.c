#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float notas[5];

  for(int i = 0; i < 5; i++) {
    printf("Digite uma nota: ");
    scanf("%f", &notas[i]);
  }

  printf("\nNotas lançadas!!!\n\n");

  for(int i = 0; i < 5; i++) {
    printf("Array Nota %d - %.1f \n", i, notas[i]);
  }
}

// Atividade 1
/* Faça um programa que leia dois números quaisquer, e escreva o maior deles. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2;

  printf("Digite uma numero: ");
  scanf("%d", &num1);

  printf("Digite outro numero: ");
  scanf("%d", &num2);

  if(num1 > num2) {
    printf("Numero maior digitado foi: %d\n", num1);
  } else if(num2 > num1) {
    printf("Numero maior digitado foi: %d\n", num2);
  } else {
    printf("Numeros iguais\n");
  }
}

// Atividade 2
/* Faça um programa que leia um número inteiro. Informar se o número é "PAR" ou "ÍMPAR". */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if(num % 2 == 0) {
    printf("Numero PAR\n");
  } else {
    printf("Numero IMPAR\n");
  }
}

// Atividade 3
/* Faça um programa que leia dois números quaisquer, e escreva o resultado do cálculo do maior divido pelo menor. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2;

  printf("Digite um numero: ");
  scanf("%d", &num1);

  printf("Digite outro numero: ");
  scanf("%d", &num2);

  if(num1 > num2) {
    printf("Resultado de %d dividido por %d foi: %d\n", num1, num2, (num1/num2));
  } else if(num2 > num1) {
    printf("Resultado de %d dividido por %d foi: %d\n", num2, num1, (num2/num1));
  } else {
    printf("Resultado de %d dividido por %d foi: %d  
      [Divisões de numeros iguais sempre retorna UM]\n", num1, num2, (num1/num2)
    );
  }
}

// Atividade 4
/* Faça um Programa que leia a receita e a despesa de uma empresa e apresente se ela está com LUCRO ou com PREJUÍZO.  */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float receita, despesa;

  printf("Digite qual foi a RECEITA da sua empresa: ");
  scanf("%f", &receita);

  printf("Digite qual foi a DESPESA da sua empresa: ");
  scanf("%f", &despesa);

  float calc = receita - despesa;

  if(receita > despesa) {
    printf("Sua empresa teve um LUCRO de %.2f\n", calc);
  } else if (despesa > receita) {
    printf("Sua empresa teve um PREJUIZO de %.2f\n", calc);
  } else {
    printf("Sua empresa não teve LUCRO nem PREJUIZO\n");
  }
}

// Atividade 5
/* Faça um Programa que leia 4 notas escolares de um aluno. Calcule e apresente a média. Sabendo-se que a média de aprovação da escola é 7, apresente a informação se o aluno foi APROVADO ou REPROVADO. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float nota1, nota2, nota3, nota4;

  printf("Digite a NOTA 1: ");
  scanf("%f", &nota1);

  printf("Digite a NOTA 2: ");
  scanf("%f", &nota2);

  printf("Digite a NOTA 3: ");
  scanf("%f", &nota3);

  printf("Digite a NOTA 4: ");
  scanf("%f", &nota4);

  float media = (nota1 + nota2 + nota3 + nota4) / 4;

  if(media >= 7) {
    printf("APROVADO E SUA MÉDIA FOI: %.1f\n", media);
  } else {
    printf("REPROVADO E SUA MÉDIA FOI: %.1f\n", media);
  }
}

// Atividade 6
/* Faça um Programa que leia dois números e apresente o sinal do produto entre eles. Considere que somente números diferentes de zero serão digitados. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2;

  printf("Digite um numero: ");
  scanf("%d", &num1);

  printf("Digite outro numero: ");
  scanf("%d", &num2);

  int result = num1 * num2;
  printf("Resultado do produto de %dx%d foi: %d\n", num1, num2, result );
}

// Atividade 7
/* Faça um Programa que leia um número e escreva “maior do que 100”, se o número digitado for maior que 100 e escreva “menor do que 100”, se o número for menor do que 100. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if(num > 100) {
    printf("Maior do que 100\n");
  } else {
    printf("Menor do que 100\n");
  }
}