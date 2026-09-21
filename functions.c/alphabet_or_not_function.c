#include <stdio.h>
void character(char x ){
    if (x>='a'&& x<='z')
      printf ("it is a alphabet");
    else 
      printf ("it is not an alphabet");   
}

int main() {
    char x;
    printf ("enter the character");
    scanf ("%c",&x);
    character(x);
    return 0;
}