#include<stdio.h>

int main(void){
  
  int n,k;

  scanf("%d\t%d",&n,&k);

  if(n == k || n%k == 0){
    printf("0\n");
  }
  else{
    printf("1\n");
  }

  return 0;
}
