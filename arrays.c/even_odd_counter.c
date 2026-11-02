#include <stdio.h>

int main() {
    int marks[10],n;
    int oddcounter=0,evencounter=0;
    scanf ("%d",&n);
for (int i = 0; i <n; i++)
{
    printf ("enter the value of %d\n",i+1);
    scanf ("%d",&marks[i]);}

for (int i = 0; i <n; i++)
{
    if (marks[i]%2==0)
    {
        evencounter+=1;
        
    }
    else{
        oddcounter+=1;
        
    }
    
}
     printf ("the no of even numbers is %d\n",evencounter); 
    printf("the no of odd numbers is %d",oddcounter);
    return 0;
}
