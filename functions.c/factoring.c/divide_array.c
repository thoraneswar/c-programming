#include <stdio.h>
int main() {
    int a [10],even[10],odd[10];
    int i,n,j=0,k=0;
     printf ("enter the value of n");
     scanf ("%d",&n);
for ( i = 0; i <n; i++)
{
    scanf("%d",&a[i]);   
}
for (int i = 0; i < n; i++)
{
    printf ("%d\n",a[i]);
}   

for ( i = 0; i < n; i++)
{
    if (a[i]%2==0)
    {
        even[j]=a[i];
        j++;
    }
    else{
       odd[k]=a[i];
       k++;
    }
}
for ( i= 0;i<j ; i++)
{
    printf ("%d\n",even[i]);
  
}
for ( i = 0; i<k; i++)
{
      printf ("%d",odd[i]); 
}

   
return 0;
}