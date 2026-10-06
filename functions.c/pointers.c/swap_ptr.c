#include <stdio.h>

    void swap(int*a,int*b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
     void change(int a,int b){
        int temp=a;
        a=b;
        b=temp;
    }
int main(){
    int x=50,y=100;
    printf ("%d %d",x,y);
    swap(&x,&y);// here we have to pass the addresses to the function not values
    change (x,y);
    printf ("%d %d",x,y);
    printf ("a=%d,b=%d",x,y);
    return 0;
}