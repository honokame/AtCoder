#include<stdio.h>
#include<string.h>

int main(void){

  char s[20] = {};
  char t[] = "pp";

  scanf("%s",s);
  strcat(s,t);
  printf("%s\n",s);

  return 0;
}
