#include<stdio.h>
#include<string.h>
int main(){
  char S[1001];
  fgets(S, 1001, stdin);
  int capital=0, small=0, spaces=0;
  for(int i=0; i<strlen(S); i++){
    if(S[i]>='A' && S[i]<='Z'){
        capital++;

    }
    else if(S[i]>='a' && S[i]<='z'){
        small++;
    }
    else{
        spaces++;
    }
  }

  printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, spaces);


  return 0;
}
