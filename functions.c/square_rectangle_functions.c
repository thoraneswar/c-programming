#include <stdio.h>
void numbers (int a,int b){
    if (a==b)
      printf ("it is a square");
    else
      printf ("it is a rectangle");
        
    
    
}

int main() {
    int x,y;
    printf ("enter the values of x and y");
    scanf ("%d %d",&x,&y);
    numbers(x,y);
    return 0;
}