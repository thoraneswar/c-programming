#include <stdio.h>

int main() {
    int n,cube;
    scanf ("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        cube=i*i*i;
    
        printf ("the cubeof %d is %d\n" , i, cube);
    }
    return 0;
}