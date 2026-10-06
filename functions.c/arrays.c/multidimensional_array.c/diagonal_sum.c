#include <stdio.h>

int main() {
int marks[3][3]={{1,2,3},{4,6,6},{7,9,9}},sum=0;
    




for (int i = 0; i <3; i++)
{
    
    for (int j = 0; j <3; j++)
    {
        if (i==j)
        {    
        sum=sum+marks[i][j];
        }
       
    }
}
  printf ("the sum of diagonal is %d",sum);
}