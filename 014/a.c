#include<stdio.h>

int main(void){
  int a,b;

  scanf("%d\n%d",&a,&b);

  if(a == b){
    printf("0\n");
  }
  else{
    printf("%d\n",b - a % b);
  }

  return 0;
}

