#include <stdio.h>
int a,b,c,d;
void sum1(){
    printf ("sum1= %d",a+b);
}
void sum2(int q,int w){
    printf ("sum2=%d",q+w);

}
int sum3(){
    return c+d;//whenever we write return we have to take another variable and then get the result
    
}
int sum4(int t,int y){
  return t+y;
}

int main() {
    printf ("enter the values of a and b");
    scanf ("%d%d",&a,&b);
    sum1();
    sum2(5,6);
    printf ("enter the values of c and d ");//we have to write scanf in the main function not the the void
    scanf ("%d%d",&c,&d);
    int summ3=sum3();
    int summ4=sum4(9,10);
    printf ("sum3=%d",summ3);
    printf ("sum4=%d",summ4);
    
    return 0;
}