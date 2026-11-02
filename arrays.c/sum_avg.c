#include <stdio.h>

int main() {
    int marks[10],sum=0,n;
    float avg;
    scanf ("%d",&n);



for (int i = 0; i <n; i++)
{
    printf ("enter the value of %d",i+1);
    scanf ("%d",&marks[i]);
    sum=sum+marks[i];
}
     avg=sum/n;
     printf ("the sum is %d\n",sum);
     printf ("the average is %f",avg);
    return 0;
}