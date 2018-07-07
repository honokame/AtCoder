#include<stdio.h>

int main(void){
  int N;

  scanf("%d",&N);
  
  if(N == 3 || N == 6 || N == 9){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }

  return 0;
}
