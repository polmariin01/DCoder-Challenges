#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int N, k, i;
  scanf("%d %d",&N,&k);
  int arr[N];
  
  for(i=0; i<N; i++) {
    scanf("%d",&arr[i]);
  }
  k=(N-k)%N;
  for(i=0; i<N; i++) {
    printf("%d ",arr[k]);
    k = (k+1) % N;
  }
  return 0;
}