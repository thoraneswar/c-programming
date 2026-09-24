#include <stdio.h>

int main() {
    int marks[5]={20,60,5,80,22},large,small;
    large=marks[0];
    small=marks[0];
for (int i = 0; i <5; i++)
{
    if (marks[i]>large)
    {
        large=marks[i];
    }
    if (marks[i]<small)
    {
        small=marks[i];
    }
    
   
}
 printf ("the largest no in the array is %d",large);
 printf ("the smallest no in the array is %d",small);
}