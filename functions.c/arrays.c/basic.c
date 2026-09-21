#include <stdio.h>

int main() {
    int a [10];
    int i,sum=0,n;
     printf ("enter the value of n");
     scanf ("%d",&n);
for ( i = 0; i <n; i++)
{
   
    scanf ("%d",&a[i]);
      sum=sum+a[i];
}

     printf ("sum=%d",sum);

    return 0;
}