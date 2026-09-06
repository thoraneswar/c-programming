#include <stdio.h>

int main() {
    int num;
    printf ("enter the value of number for which the table has to be written ");
    scanf ("%d",&num);
    printf ("the multiplication table of %d is \n", num);
    for (int  i = 1; i <=10; i++)
    {
        printf ("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}