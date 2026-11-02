#include <stdio.h>
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    
    else
    return n+sum( n- 1);
}
  
  
  int main() {
      int n, result;
      printf ("enter the value of n");
      scanf("%d",&n);
      result=sum(n);
      printf("the sum is %d",result);
      return 0;
  }