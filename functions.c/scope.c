#include <stdio.h>
float si (float p, float t ,float r){
    float simple;
    simple=(p*t*r)/100;
    printf ("%f",p);//local scope
    return simple ;

}

int main() {
    float p,t,r,s;
    printf ("enter the values of p,t,r");
    scanf ("%f %f %f",&p,&t,&r );
    s=si(p,t,r);
    printf ("%f",s);
    return 0;
}