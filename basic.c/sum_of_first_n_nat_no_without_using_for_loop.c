#include <stdio.h>

int main() {
     int n,sum=0;
    printf ("enter the value of the last number upto which the sum is needed is");
    scanf ("%d",&n);
    sum=(n*n + n)/2;
    printf ("the sum is %d",sum);
    return 0;
}