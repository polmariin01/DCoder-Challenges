#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int T;
  float N;
  scanf("%d",&T);
  //scanf("%*[^\n]%*c",&N);
  for (int i=0;i<T;i++){
    scanf("%f",&N);
    printf("%.2f\n",N);
  }
  return 0;
}