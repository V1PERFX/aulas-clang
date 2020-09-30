#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// recursividade.. fatorial
int fat(int n)
{
  if(n == 0){
    return 1;
  }else {
    return n * fat(n - 1);
  }
}

int main()
{
  int x, res;
  
  printf("Digite um numero positivo: ");
  scanf("%d", &x);
  
  res = fat(x);
  printf("Fatorial do numero %d eh igual a %d.", x, res);
  
  getch();

  return 0;
}