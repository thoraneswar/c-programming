#include <stdio.h>
int age(int a){
    if (a<18)
    {
        printf (" not eligible");
    }
    else 
    {
        printf (" eligible");
    }
    
    
}

int main() {
    int (*ptr)(int);
    ptr=&age;
    ptr(19);
    return 0;
}