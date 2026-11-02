#include <stdio.h>

int main() {
    int n,counter=0;
    printf ("enter the number");
    scanf ("%d",&n);
    while (n!=0)
    {
        n=n/10;
        counter++;
    }
        printf ("the no of digits is %d",counter);
    return 0;
}