#include<stdio.h>
#include<stdlib.h>

int main(void){

  int N,sum = 0,i = 0;
  scanf("%d",&N);

  for(i = 1;i <= N;i++){
    sum += i;
  }
  printf("%d\n",(sum*10000) / N);

return 0;
}
