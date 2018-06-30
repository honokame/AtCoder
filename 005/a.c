#include<stdio.h>

int main(void){
  int x,y;

  scanf("%d\t%d",&x,&y);
  if(x >= 0 && x <= 100){
    if(y >= 0 && y <= 100){
      printf("%d\n",y / x);
    }
  }
  return 0;
}
