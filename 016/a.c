#include<stdio.h>

int main(void){

  int M,D;

  scanf("%d\t%d",&M,&D);

  if(M % 6 == 0){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }

  return 0;
}
