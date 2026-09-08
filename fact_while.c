#include <stdio.h>

int main() {
    int i=1,n,fact=1;
    printf ("enter the value of the required factorial");
    scanf ("%d",&n);
    while (i<=n){
        
        fact=fact*i;
        i++;

    }
           printf ("the value of factorial is %d",fact);
        
    
    
    return 0;
}