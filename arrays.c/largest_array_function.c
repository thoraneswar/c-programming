#include <stdio.h>
int largest(int marks[]){
    int large;
    large=marks[0];
    
for (int i = 0; i <5; i++)
{
    if (marks[i]>large)
    {
        large=marks[i];
    }
}
   return large;
}

int main() {
    int result;
    int marks[5]={20,60,5,80,22};
    result=largest(marks);
    printf ("the largest no is %d",result);
 

}