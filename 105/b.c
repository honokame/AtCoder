#include<stdio.h>

int main(void){

  int n,i;

  scanf("%d",&n);
  
  if(n % 4 == 0 || n % 7 == 0){
    printf("Yes\n");
    return 0;
  }

  for(i = 0;i*7 < n;i++){
    if((n - 7*i) % 4 == 0){
      printf("Yes\n");
      return 0;
    }
  }

  printf("No\n");

  return 0;
}
