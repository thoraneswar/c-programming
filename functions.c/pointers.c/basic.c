#include <stdio.h>

int main() {
    int age=40;
    int *ptr=&age;
    printf ("%d\n",age);
    printf ("%p\n",&age);
    printf ("%p\n",ptr);// percentage p for address
    printf ("%d\n",*ptr);// star ptr prints the value
    return 0;
}