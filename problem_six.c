#include<stdio.h>
int main(){
  int N,X1, X2;
  scanf("%d", &N);
  int Tiger=0, Pathan=0, Draw=0;
  for(int i=0; i<N; i++){
    scanf("%d %d", &X1, &X2);
  
  if(X1>X2){
    Tiger++;
  }
  else if(X1<X2){
    Pathan++;
  }
  else{
    Draw++;
  }
  }
  if(Tiger>Pathan){
    printf("Tiger\n");
  }
  else if(Tiger<Pathan){
    printf("Pathan\n");
  }
  else if(Tiger==Pathan){
    printf("Draw\n");
  }
  

 

  
  return 0;
}
