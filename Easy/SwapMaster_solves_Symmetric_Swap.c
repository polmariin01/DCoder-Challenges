#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int T, i;
  scanf("%d", &T);
  int v[T];
  for (i=0; i<T; i++) {
    scanf("%d", &v[i]);
  }
  for (i=T-1; i>=0; i--){
    printf("%d ", v[i]);
  }
  //printf("Hello, World!");
  return 0;
}