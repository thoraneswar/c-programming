#include <stdio.h>

int main() {
    int temp;
    scanf ("%d",&temp);
    if (temp<0){
        printf ("freezing weather");
    }
    else if (temp>=0 || temp<=10){
        printf("very cold");
    }
    return 0;
}