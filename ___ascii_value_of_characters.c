#include <stdio.h>

int main() {
    char ch='A';
    do
    {
       printf ("%c=%d\n",ch,ch);
       ch++;
    } while (ch<='E');
    
    return 0;
}