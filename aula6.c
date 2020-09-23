#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //vetor é unidirecional
  int notas[4];
  int media, soma;
  int MAX = 4;

  for(int i = 0; i < MAX; i++) {
    printf("Digite a nota %d: ", (i + 1));
    scanf("%d", &notas[i]);
  }

  for(int i = 0; i < MAX; i++) {
    soma = soma + notas[i];
  }

  media = soma / MAX;
  printf("media %d", media);


  return 0;
}

//exercicio
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int MAX;

  printf("quantas notas vc quer digitar? ");
  scanf("%d", &MAX);

  int notas[MAX];
  int media, soma = 0;

  for(int i = 0; i < MAX; i++) {
    printf("Digite a nota %d: ", (i + 1));
    scanf("%d", &notas[i]);
    soma += notas[i];
  }

  media = soma / MAX;
  printf("soma: %d\n", soma);
  printf("media: %d\n", media);


  return 0;
}


//funciona no Dev C++
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void) {
  char nome[40];

  printf("Digite seu nome: ");
  scanf("%s", &nome);

  printf("Boa Noite, %s.", nome);

  getch();

  return 0;
}