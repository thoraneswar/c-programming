#include <stdio.h>

int main() {
    int num[5],n,count=0;
     for (int i = 0; i < 5; i++)
     {
        scanf ("%d",&num[i]);
     }
      printf ("enter the value of n");
      scanf ("%d",&n);
     for (int i = 0; i < 5; i++)
     {
        if (n==num[i])
        {
           count+=1;
        } 
     }
       printf ("the no of times %d repeated is %d",n,count);
    return 0;
}