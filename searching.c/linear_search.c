#include <stdio.h>

int main() {
    int arr[10],n,a,found;
    printf ("enter the value of n");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

    while (found!=1)
    {
    printf ("enter the value of a");
    scanf ("%d",&a);

     for (int i = n; i >=0; i--)
    {
       if (arr[i]==a)
        {
            found==1;
            printf("it is present %d",i);
            break;
        }
       
    }
   
}
    
    
    return 0;
}