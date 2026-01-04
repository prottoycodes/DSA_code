#include <stdio.h>

int main() {
    
  int a;
  int sum=0;
  scanf("%d", &a);
  while (a!=0){
    int digit=a%10;
    a=a/10;
    sum=sum+digit;
  }
  
  printf("%d",sum);
  
  
    
    
    
    
    
    
    
    return 0;
}