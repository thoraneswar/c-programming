#include <stdio.h>

int main() {
    
    int a [10],b[10];
    int i,n,j=0;
     printf ("enter the value of n");
     scanf ("%d",&n);
for ( i = 0; i <n; i++)
{
    scanf ("%d",&a[i]);
}
for (int i =n-1; i>=0; i--)
{
   b[j]=a[i];
   j++;

}
for ( j = 0; j <n; j++)
{
    printf("%d",b[j]);
}

   
  

    return 0;
}
    
