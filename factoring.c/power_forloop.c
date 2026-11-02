#include <stdio.h>

int main() {
    int base,n,result=1;
    printf("enter the values of base and n");
    scanf ("%d %d",&base,&n);
    for (int i =1; i <=n; i++)
    {
        result=result*base;
    }
    printf ("the result is %d",result);
   
    return 0;
}