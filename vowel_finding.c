#include <stdio.h>

int main() {
    char alphabet;
    printf ("enter the character");
    scanf ("%c",&alphabet);
    if (alphabet=='a')
      printf ("the character is a vowel and it is %c",alphabet);
    else if (alphabet=='e')
      printf ("the character is a vowel and it is %c",alphabet);
    else if  (alphabet=='i')
       printf ("the character is a vowel and it is %c",alphabet);
    else if (alphabet=='o')
      printf ("the character is a vowel and it is %c",alphabet);
    else if (alphabet=='u')
      printf ("the character is a vowel and it is %c",alphabet);
    else
      printf ("the character is a consonant");
    
    
    return 0;
}