#include<stdio.h>

int main(void){

  int x,y;
  scanf("%d\t%d",&x,&y);

  if(x > y){
    if(x >= 0 && y <= 1000000000){
      printf("%d\n",x);
    }
  }
  if(y > x){
    if(x >= 0 && y <= 1000000000){
      printf("%d\n",y);
    }
  }

  return 0;
}
