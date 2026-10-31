#include <stdio.h>

int main() {
    int arr[10]={87,64,98,32,1,7};
    int temp;
    for (int i = 0; i <6; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
        printf ("%d ",arr[i]);
    }
    
    
    return 0;
}