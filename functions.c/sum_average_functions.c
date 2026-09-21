#include <stdio.h>
float num(float n){
    float  sum=0,avg;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
        avg=sum/n;
     }
     return avg;
}

float main() {
    float n,avgg;
    printf ("enter the value of n");
    scanf ("%f",&n);
    avgg=num(n);
    printf ("the avg is %f",avgg);
    return 0;
}