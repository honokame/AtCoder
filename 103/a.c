#include<stdio.h>

int main(void){

  int a,b,plus,cross;
  scanf("%d%d",&a,&b);
  plus = a + b;
  cross = a * b;

  if(plus == 15){
    printf("+\n");
  }
  else if(cross == 15){
    printf("*\n");
  }
  else{
    printf("x\n");
  }

  return 0;
}
