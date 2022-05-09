#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int N,i,k;
  scanf("%d",&N);
  char c[N];
  for(i=0; i<N; i++) {
    while ((c[i]>122 )|| (c[i]<65) || (c[i]>90 && c[i]<97)){
      scanf("%c",&c[i]);
    }
    //printf("%c",c[i]);
  }
  scanf("");
  for(i=0;i<2;i++){
    scanf("%d",&k);
    if (c[k]>96){
      c[k]=c[k]-32;
    } else {
      c[k]=c[k]+32;
    }
  }
  for(i=0;i<N;i++){
    printf("%c",c[i]);
  }
  return 0;
}