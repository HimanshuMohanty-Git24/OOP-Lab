//2)Write a function to subtract two values of type float and returns the result 
#include <stdio.h>

float sub(float num1,float num2){
    return(num1-num2);
}
int main()
{
    float num1,num2,result;
    printf("Enter two number:");
    scanf("%f%f",&num1,&num2);
    result = sub(num1,num2);
    printf("Sum of two number is:%0.1f",result);
    return 0;
}

