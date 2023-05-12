#include<stdio.h>
int main(){
  int N,S,K;
  scanf("%d", &N);
  S=N-1;
  K=1;
  for(int i=1; i<=N; i++){
    for(int j=1; j<=S; j++){
        printf(" ");
    }
    for(int j=1; j<=K; j++){
        if(i%2==0){
            printf("*");
        }
        else{
            printf("^");
        }
    }
    S--;
    K=K+2;
    printf("\n");
  }

  return 0;
}
