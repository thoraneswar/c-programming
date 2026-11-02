#include <stdio.h>
void swap (int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
 void sel_sort(int arr[5],int n){
    int i,j,min_idx;
    for (int i = 0; i <n-1; i++)
    {
        min_idx=i;
          for ( j = i+1; j <n; j++)
          {
             if (arr[j]<arr[min_idx])
             {
                min_idx=j;
             }
             
          }
            if (min_idx!=i)
            {
                swap(&arr[min_idx],&arr[i]);
            }
            
    }
    
 }
 void print(int arr[5],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
 }
int main() {
    int arr[5]={64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("original:\t");
    print(arr,n);
    sel_sort(arr,n);
    printf ("sorted array:\t");
    print(arr,n);
    return 0;
}
