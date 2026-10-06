#include <stdio.h>

int main() {
    int i,j,n,m;
   scanf("%d %d",&n,&m);//n and m should be declared before using mat
    int mat[n][m];
     
    for ( i = 0; i <n; i++)
    {
        for( j = 0; j <m; j++)
        {
           scanf("%d",&mat[i][j]);
             
        }
      
    }
     for ( i = 0; i <n; i++)
    {
        for( j = 0; j <m; j++)
        {
           printf("%d",mat[j][i]);//transpose
        }
        printf ("\n");
    }
    
    return 0;
}