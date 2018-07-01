#include<stdio.h>

int main(void){
  
  int i,j,tmp,N = 0;
  int a[100];

  scanf("%d",&N);

  for(i = 0;i < N ;i++){
    scanf("%d",&a[i]);
  }

  for (i=0; i<N; ++i) {
    for (j=i+1; j<N; ++j) {
      if (a[i] > a[j]) {
        tmp =  a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
  printf("%d\n",a[N-1]-a[0]);

  return 0;
}
