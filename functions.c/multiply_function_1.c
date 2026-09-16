#include <stdio.h>
int a,b,c,d;
void multiply1(){
    printf ("multiply1= %d",a*b);
}
void multiply2(int q,int w){
    printf ("multiply2=%d",q*w);

}
int multiply3(){
    return c*d;//whenever we write return we have to take another variable and then get the result
    
}
int multiply4(int t,int y){
  return t*y;
}

int main() {
    printf ("enter the values of a and b");
    scanf ("%d%d",&a,&b);
    multiply1();
    multiply2(5,6);
    printf ("enter the values of c and d ");
    scanf ("%d%d",&c,&d);
    int multiplyy3=multiply3();
    int multiplyy4=multiply4(9,10);
    printf ("multiply3=%d",multiplyy3);
    printf ("multiply4=%d",multiplyy4);
    
    return 0;
}