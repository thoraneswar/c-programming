#include <stdio.h>

int main() {
    int a=0,b=1,i=1,n,fib;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d%d",a,b);
    
    while (i<=n-2)
    {
        fib=a+b;
        a=b;
        b=fib;
        i++;
         printf("%d",fib);
    }
    
    return 0;
}