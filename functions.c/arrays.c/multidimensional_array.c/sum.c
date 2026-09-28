#include <stdio.h>

int main() {
int marks[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum=0,row,col;
    




for (int i = 0; i <3; i++)
{
    
    row=0;
    col=0;
    
    for (int j = 0; j <3; j++)
    {
        col=col+marks[j][i];
        row=row+marks[i][j];
        sum=sum+marks[i][j];
    
       
    }
     printf ("the sum of %d row is %d",i+1,row);
     printf ("the sum of col %d is %d",i+1,col); 
}
    

    
     printf ("the total sum is %d",sum);
     int large=marks[0][0];
     int small= marks[0][0];
     for ( int i = 0; i < 3; i++)
     {
        for (int j= 0; j < 3; j++)
        {
            if (large<marks[i][j])
            {
                large=marks[i][j];
            }
            if (small>marks[i][j])
            {
                small=marks[i][j];
            }
            
        }
        
     }
     printf ("the largest no is %d",large);
     printf ("the smallest no is %d",small);
    return 0;
}