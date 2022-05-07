#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int T, N, i, j, M;
  scanf("%d", &T);
  
  for (i=0; i<T; i++){
    scanf("%d", &N);
    M = 0;
    for (j=0; j<N; j++){
      M = M + (N-j)*(N-j);
    }
    printf("%d\n", M);
  }
  return 0;
}