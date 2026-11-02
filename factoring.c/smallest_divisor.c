#include <stdio.h>
#include <math.h>
int find_smallest_divisor(int n){
    if (n<=1)
    {
        return n;
    }
    if (n%2==0)
    {
        return 2;
    }
    int limit=sqrt(n);// the main condition for smallest divisor
    for (int i = 3; i <= limit; i+=2)//we use +=2 because we check odd divisors in this loop
    {
        if (n%i==0)
        {
            return i;
        }
        
    }
    return n;
    
}
int main() {
    int num;
    printf ("enter the num");
    scanf ("%d",&num);
    int result =find_smallest_divisor(num);
    printf ("the smallest divisor of %d is %d\n",num,result);
    return 0;
}