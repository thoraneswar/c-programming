#include <stdio.h>

int main() {
    char alphabet;
    printf ("enter the character");
    scanf ("%c",&alphabet);
    if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u') 
      printf ("it is a vowel");
    else 
      printf ("it is a consonant");

    return 0;
}