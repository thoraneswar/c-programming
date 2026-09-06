#include <stdio.h>

int main() {
    int temp,a,b;
    a=10,b=12;
    temp=a;
    a=b;
    b=temp;
    printf("The swapped no. are a= %d and b= %d",a,b);
    return 0;
}