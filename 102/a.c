#include<stdio.h>

int main(void){
  int N,a;
  scanf("%d",&N);
  a = N % 2;
  if(a == 0){
    printf("%d\n",N);
  }
  else{
    printf("%d\n",2 * N);
  }

  return 0;
}
