#include<stdio.h>
int main(int argc,char**argv){

  char no[10];

  scanf("%s",no);
  if((no[0] == no[1] && no[0] == no[2]) || (no[1] == no[2] && no[1] == no[3])){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }

  return 0;
}
  

