//3)Write a function to multiply two values of type int & double and returns the Result
#include <stdio.h>

float mul(int num1,float num2){
    return(num1*num2);
}
int main()
{
    int num1;
    double num2,result;
    printf("Enter two number:");
    scanf("%d%lf",&num1,&num2);
    result = mul(num1,num2);
    printf("Sum of two number is:%0.1lf",result);
    return 0;
}

