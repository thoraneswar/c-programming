#include <stdio.h>

int main() {
    char alphabet;
    printf ("enter the alphabet");
    scanf ("%c",&alphabet);
    switch(alphabet)
    {
      case('a'):
       printf ("it is a vowel");
       break;
      case('e'):
       printf ("it is a vowel");
       break;
      case('i'):
       printf ("it is a vowel");
       break;
      case('o'):
       printf ("it is a vowel");
       break;
      case ('u'):
       printf ("it is a vowel");
       break;
      default:
       printf ("it is a consonant");
       



    }
    return 0;
}