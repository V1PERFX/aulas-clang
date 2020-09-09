#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int resp, num;
  
  printf("Digite um numero da tabuada que deseja: ");
  scanf("%d", &num);

  for(int i = 0; i <= 10; i++) {
    resp = i * num;
    printf("%d x %d = %d\n", i, num, resp);
  }
}

//Exercicio proprosto pela professora
//Deixar em um unico programa os 4 programas da aula anterior
#include <stdio.h>
#include <stdlib.h>

int sair = 1;

void LucroPrejuizo(){
  system("clear");
  printf("\nFaça um Programa que leia a receita e a despesa de uma empresa e apresente se ela está com LUCRO ou com PREJUÍZO.\n\n");
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

  printf("\n\nDeseja continuar ?\n  1 - Volta ao menu do programa\n  0 - Finaliza o programa\nEscolha uma das opções acima: ");
  scanf("%d", &sair);
}

void AprovadoReprovado() {
  system("clear");
  printf("\nFaça um Programa que leia 4 notas escolares de um aluno. Calcule e apresente a média. Sabendo-se que a média de aprovação da escola é 7, apresente a informação se o aluno foi APROVADO ou REPROVADO.\n\n");
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
    printf("APROVADO e sua MÉDIA foi: %.1f\n", media);
  } else {
    printf("REPROVADO e sua MÉDIA foi: %.1f\n", media);
  }

  printf("\n\nDeseja continuar ?\n  1 - Volta ao menu do programa\n  0 - Finaliza o programa\nEscolha uma das opções acima: ");
  scanf("%d", &sair);
}

void SinalProduto() {
  system("clear");
  printf("\nFaça um Programa que leia dois números e apresente o sinal do produto entre eles. Considere que somente números diferentes de zero serão digitados.\n\n");
  int num1, num2;

  printf("Digite um numero: ");
  scanf("%d", &num1);

  printf("Digite outro numero: ");
  scanf("%d", &num2);

  int result = num1 * num2;
  printf("Resultado do produto de %dx%d foi: %d\n", num1, num2, result );

  printf("\n\nDeseja continuar ?\n  1 - Volta ao menu do programa\n  0 - Finaliza o programa\nEscolha uma das opções acima: ");
  scanf("%d", &sair);
}

void MaiorMenor() {
  system("clear");
  printf("\nFaça um Programa que leia um número e escreva “maior do que 100”, se o número digitado for maior que 100 e escreva “menor do que 100”, se o número for menor do que 100.\n\n");
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if(num > 100) {
    printf("Maior do que 100\n");
  } else {
    printf("Menor do que 100\n");
  }

  printf("\n\nDeseja continuar ?\n  1 - Volta ao menu do programa\n  0 - Finaliza o programa\nEscolha uma das opções acima: ");
  scanf("%d", &sair);
}

int main(void) {
	do {
    system("clear");
    int opc;
  
    printf("1 - LUCRO e PREJUÍZO\n");
    printf("2 - APROVADO ou REPROVADO\n");
    printf("3 - SINAL DO PRODUTO\n");
    printf("4 - MAIOR ou MENOR\n\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opc);

    switch(opc) {
      case 1:
        LucroPrejuizo();
      break;
      case 2:
        AprovadoReprovado();
      break;
      case 3:
        SinalProduto();
      break;
      case 4:
        MaiorMenor();
      break;
    }
  } while(sair != 0);
}