#include <stdio.h>
void number (int x){
    if (x%2==0)
      printf ("it is even");
    else 
    printf ("it is odd");
}

int main() {
    int n;
    printf ("enter the value of n");
    scanf ("%d",&n);
    number(n);
    
    return 0;
}