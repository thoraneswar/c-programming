#include <stdio.h>
void number(int a){
    if (a>0)
      printf ("it is positive");
    else if (a<0)
      printf ("it is negative");
    else 
      printf ("it is zero");
}
void numberr (int x){
    if (x%2==0)
      printf ("it is even");
    else 
      printf ("it is odd");
}
int main() {
    int n,a;
    printf ("enter the value of n");
    scanf ("%d\n",&n);
    numberr(n);
    printf ("enter the value of a");
    scanf ("%d",&a);
    number(a);
    return 0;
}
