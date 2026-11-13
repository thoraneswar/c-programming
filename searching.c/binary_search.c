#include <stdio.h>
int binarysearch(int arr[10],int size, int target){
    int low=0;
    int high=size-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
     return -1;
}
   

int main() {
    int arr[10]={2,5,8,12,16,23,38,56};
    int size =sizeof(arr)/sizeof(arr[0]);
    int target=23;
    int result=binarysearch(arr,size,target);
    if (result!=-1)
    {
        printf("it is found at index %d\n",result);
    }
    else
     printf("it is not found\n");
    return 0;
}