#include <stdio.h>
int sum(int *a ,int *b){
    int c;
    c=*a+*b;
    printf ("sum=%d",*a+*b);
    printf ("%d",c);

} 
int main() {
    int x=50,y=100,c;
    sum(&x,&y);
    printf ("%d",x+y);
    return 0;
}