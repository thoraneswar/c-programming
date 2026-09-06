#include <stdio.h>

int main() {
    int n,fact=1;
    printf ("enter the value of the required factorial");
    scanf ("%d",&n);
    if(n==0||n==1) 
       printf ("the value of factorial is 1 ");
    for (int i = 1; i <= n; i++)//we can use i=2 also it will  work the same way
    {
        fact=fact*i;
    }
        printf ("the value of factorial is %d",fact);
    return 0;
}