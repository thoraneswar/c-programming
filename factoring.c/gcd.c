#include <stdio.h>
int gcd(int a,int b ){
 while (b!=0)
 {
    int temp =b;
    b=a%b;
    a=temp;
 }
 return a;  
}
int main() {
    int x,y,result;
    printf ("enter the values of a and b");
    scanf ("%d %d",&x,&y);
    result= gcd(x,y);
    printf ("the gcd of %d and %d is %d",x,y,result);
    return 0;
}