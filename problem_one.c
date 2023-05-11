#include<stdio.h>
int main(){
    int test;
    scanf("%d", &test);
    for(int i=0; i<test; i++){
         int sum, a, b, c;
    scanf("%d %d %d %d", &sum, &a, &b, &c);
    int result= sum-(a+b+c);
    printf("%d", result);
    printf("\n");

    }
   
 
  return 0;
}
