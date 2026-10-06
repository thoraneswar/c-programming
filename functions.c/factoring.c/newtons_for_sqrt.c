#include <stdio.h>
double absolute_value(double num){//function to find absolute value
    if (num<0){
        return -num;
    }
return num;
}
double find_sq_rt(double number){//function to find sqrt 
    double guess =number/2.0;
    double precision =0.000001;
    double next_guess;


while(1){//to execute while loop without any condition check
    next_guess=0.5*(guess+(number/guess));
    printf ("the value of next guess is %lf\n",next_guess);//lf for double
    if (absolute_value(next_guess-guess)<precision)
    {
         break;
    }
    guess=next_guess;
    printf ("the value of  guess is %lf\n",guess);
}
return next_guess;
}// the function sqrt ends here

int main() {
    double num;
    printf ("enter the num");
    scanf ("%lf",&num);
    double result=find_sq_rt(num);
    if (result!=-1){
    
        printf ("the sqrt of %.6f is approx %.6f\n",num,result);
    }
    
    return 0;
}
// there are three parts in this code 