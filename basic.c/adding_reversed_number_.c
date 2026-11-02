#include <stdio.h>

int main() {
    int num,reversed=0,sum=0;
    printf ("enter the value of num");
    scanf ("%d",&num);
    while (num!=0)
    {
       reversed=reversed*10 + num%10;
       sum=sum+num%10;
       num/=10;
       
    }
       printf ("the reversed number is %d\n",reversed);
       printf ("the sum of the digits is %d",sum);

    return 0;
}