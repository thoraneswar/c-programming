#include <stdio.h>

int main() {
    int sum=0;
    for (int i = 1; i<=5; i++)
    {
        sum+=i;
    }
        printf ("%d",sum);//it should be outside the for loop or else it will not be executed
    
    
    return 0;
}