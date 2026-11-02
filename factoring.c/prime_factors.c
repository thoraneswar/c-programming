#include <stdio.h>
void primefactors(int n){
    while (n%2==0)    //  first we will check the even numbers(even prime=2)
    {
        printf ("%d",2);
        n=n/2;
    }
    
    for (int i = 3; i*i <=n; i+=2)// the condition is i<=root'n'
    {
        while (n%i==0)// then odd numbers
        {
            printf ("%d",i);
            n=n/i;
        } 
    }
    
    if (n>2)// only primes are left
    {
        printf("%d",n);
    }
  
}

int main() {
    int num;
    printf("enter the num");
    scanf ("%d",&num);
    printf("prime factors of %d are \n",num);
    primefactors(num);
    
    return 0;
}