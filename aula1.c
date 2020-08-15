// introdução a linguagem C
#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor, metade;
  //int valor;

  printf("Usuario, favor digitar valor: ");
  //scanf("%d", &valor); // %d ou %i d=decimal i=inteiro
  scanf("%f", &valor);

  metade = (float) valor / 2; // (float) antes do valor é cast para fazer conversão
  //printf("Metade de %d é %.2f\n\n", valor, metade); // %f f=float, .2 mostra duas casas decimais depois do .

  printf("Metade de %.2f é %.2f\n\n", valor, metade);

	return 0;
}


// exercicio 1 que o professor pediu
#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, nota3, media;

  printf("Usuario, favor digitar nota 1: ");
  scanf("%f", &nota1);

  printf("Usuario, favor digitar nota 2: ");
  scanf("%f", &nota2);

  printf("Usuario, favor digitar nota 3: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;
  
  printf("Sua media é %.1f\n\n", media);

	return 0;
}

// esperar o usuario terminar o programa (while)
#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor, metade;
  int opcao = 1;
  
  while (opcao == 1) {
    printf("Usuário, favor digite um valor: ");
    scanf("%f", &valor);

    metade = valor / 2;

    printf("Metade é %.2f\n\n", metade);

    printf("Digite 1 para novo valor ou Digite 0 para sair: ");
    scanf("%df", &opcao);
  }
  
	return 0;
}

// esperar o usuario terminar o programa (do while)
#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor, metade;
  int opcao = 1;
  
  do {
    printf("Usuário, favor digite um valor: ");
    scanf("%f", &valor);

    metade = valor / 2;

    printf("Metade é %.2f\n\n", metade);

    printf("Digite 1 para novo valor ou Digite 0 para sair: ");
    scanf("%df", &opcao);
  } while (opcao == 1);
  printf("\n\n");
  
	return 0;
}

// melhorando o programa (do while)
#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor, metade;
  
  printf("Digite 0 no valor para sair !!!!\n\n");

  do {
    printf("Usuário, favor digite um valor: ");
    scanf("%f", &valor);

    metade = valor / 2;

    printf("Metade é %.2f\n\n", metade);
  } while (valor != 0);
  
	return 0;
}

// usuario já informa quantos loops vai ter (for)
#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor, metade;
  int qtDeValores;
  
  printf("Digite quatidade de valores: ");
  scanf("%d", &qtDeValores);

  for(int i = 1; i <= qtDeValores; i++) {
    printf("Usuário, favor digite um valor: ");
    scanf("%f", &valor);

    metade = valor / 2;

    printf("Metade é %.2f\n\n", metade);
  }
  
	return 0;
}

// exercicio 2 que o professor pediu (for)
#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, nota3, media;
  int qtDeValores;
  
  printf("Digite quatidade de valores: ");
  scanf("%d", &qtDeValores);

  for(int i = 1; i <= qtDeValores; i++) {
    printf("Favor digitar nota 1: ");
    scanf("%f", &nota1);

    printf("Favor digitar nota 2: ");
    scanf("%f", &nota2);

    printf("Favor digitar nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    
    printf("Sua media é %.1f\n\n", media);
  }

	return 0;
}

// exercicio 2 resultado do professor
#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, nota3, media;
  
  printf("Digite 11 na nota 1 para sair\n");

  do {
    printf("Favor digitar nota 1: ");
    scanf("%f", &nota1);

    if(nota1 != 11) {
      printf("Favor digitar nota 2: ");
      scanf("%f", &nota2);

      printf("Favor digitar nota 3: ");
      scanf("%f", &nota3);

      media = (nota1 + nota2 + nota3) / 3;
      
      printf("Sua media é %.1f\n\n", media);
    }
  } while(nota1 != 11);

	return 0;
}