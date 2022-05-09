#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int max=0, N, sum=0, i, aux;
  scanf("%d",&N);
  for(i=0;i<N;i++) {
    scanf("%d",&aux);
    if (aux>max) {
      max=aux;
    }
    sum = sum + aux;
  }
  printf("%d",sum%max);
  return 0;
}