#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int N, k;
  scanf("%d %d",&N, &k);
  printf("%d", (N/2+k)%N);
  return 0;
}