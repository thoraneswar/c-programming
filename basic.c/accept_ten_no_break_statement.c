#include <stdio.h>

int main() {
    int num;
    for (int i = 1; i <=10; i++)
    {
        printf ("enter the num");
        scanf ("%d",&num);
        if (num==0)
        break;//the loop 
    }
    return 0;
}