#include<stdio.h>
#include<string.h>

int main(){

  char s[1000] = {};
  int w = 0,i = 0;

  scanf("%s",s);
  scanf("%d",&w);

  for(i= 0;i * w < strlen(s);i++){
    printf("%c",s[i*w]);
  }
  printf("\n");

  return 0;
}
