#include <stdio.h>
void numbers(int x , int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf ("the swapped values of a and b are %d and %d",x,y);
}

int main() {
    int a,b;
    printf ("enter the values of a and b");
    scanf ("%d %d",&a,&b);
    printf ("the values of a and b are %d and %d",a,b);
    numbers(a,b);
    return 0;
}