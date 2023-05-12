#include<stdio.h>
int main(){
  int N;
  scanf("%d", &N)        ;
  int a[N];
  for(int i=0; i<N; i++){
    scanf("%d", &a[i]);
  }

  //asending order
  for(int i=0; i<N-1; i++ ){
    for(int j=i+1; j<=N; j++){
        if(a[i]>a[j]){
            int tmp= a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
  }
  int middle=N/2;
  if(N%2==0){
    printf("%d %d", a[middle-1] , a[middle]);
  }
  else{
    printf("%d", a[middle]);
  }
  return 0;
}
