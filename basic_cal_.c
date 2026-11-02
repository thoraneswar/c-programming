#include <stdio.h>

int main() {
    int arr[10],mul=1;
    for (int i = 0; i < 10; i++)
    {
      printf("enter the value of arr");
      scanf("%d",&arr[i]);
    }
    for (int i = 0; i <10; i+=2)
    {
       mul=mul*arr[i];
    }
    printf ("the value of mul is %d",mul);
    return 0;
}