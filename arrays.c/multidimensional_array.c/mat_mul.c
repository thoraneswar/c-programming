#include <stdio.h>

int main() {
    int first[10][10], second[10][10],r1=2,r2=2,c1=2,c2=2,result[10][10];
       
    for ( int i = 0; i <2; i++)
    {
        for(int j = 0; j <2; j++)
        {
           scanf("%d",&first[i][j]);
             
        }
      
    }
       
    for ( int i = 0; i <2; i++)
    {
        for(int  j = 0; j <2; j++)   /* everytime k executes only twice and when j is
                                     incremented then k becomes 0 again and executes twice*/
        {
           scanf("%d",&second[i][j]);
             
        }
      
    }
    for (int i = 0; i < r1; i++)
    {
        for ( int j = 0; j <c2; j++)
        {
            result[i][j]=0;
            for (int k= 0; k < c1; k++)// ++k decreases the execution time
            {
                result[i][j]+=first[i][k]*second[k][j];
                printf("the value of k is%d\n",k);
                printf("%d\n",result[i][j]);
            }
            
            
        }
        
    }
       
    for (int i = 0; i <2; i++)
    {
        for(int  j = 0; j <2; j++)
        {
           printf(" %d",result[i][j]);
             
        }
        printf("\n");
    }
    return 0;
}