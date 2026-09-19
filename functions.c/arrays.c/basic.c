#include <stdio.h>

int main() {
    int a [10];
    int i;
for ( i = 0; i <5; i++)
{
    scanf ("%d",&a[i]);
}
for ( i = 0; i<5; i+=2)
{
    printf ("%d",a[i]);
}

    return 0;
}