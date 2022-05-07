#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int T,N,R,m,a,b,c;
  scanf("%d",&T);
  
  for (int i=0; i<T; i++){
    scanf("%d %d",&N,&R);
    a=1;
    for (int j=N-1;j>1;j--){
      a=a*j;
    }
    b=1;
    for (int j=R-1;j>1;j--){
      b=b*j;
    }    
    c=1;
    for (int j=N-R;j>1;j--){
      c=c*j;
    }
    printf("%d\n",a/b/c);
  }
  
  return 0;
}