#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int N, i, j;
  scanf("%d", &N);
  
  int matrix[N][N];
  
  //crear matriu
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      scanf("%d", &matrix[i][j]);
    }
  }
  
  int sim=1;
  //comprovar
  for(i=0; i<N; i++){
    for(j=i+1; j<N; j++){
      if (matrix[i][j]!=matrix[j][i]) {
        sim=0;
      }
    }
  }
  
  if (sim==1){
    printf("YES");
  } else {
    printf("NO");
  }
  
  return 0;
}