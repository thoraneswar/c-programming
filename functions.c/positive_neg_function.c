#include <stdio.h>
void number(int a){
    if (a>0)
      printf ("it is positive");
    else if (a<0)
      printf ("it is negative");
    else 
      printf ("it is zero");
}



int main() {
    int a;
    printf ("enter the value of a");
    scanf ("%d",&a);
    number(a);
    
    
    return 0;
}