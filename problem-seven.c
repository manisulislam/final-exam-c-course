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

if(N%2==1){
    int mid= (N+1)/2;
   
    printf("%d", a[mid]);
    
}
else{
    int mid_one=(N/2);
    int mid_two= (N/2)+1;
   
    printf("%d %d", a[mid_one-1], a[mid_two-1]);
    
    
}
 

  return 0;
}
