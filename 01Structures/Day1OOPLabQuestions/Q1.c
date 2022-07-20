//1)Write a function to add two values of type integer and returns the result 
#include <stdio.h>

int sum(int num1,int num2){
    return(num1+num2);
}
int main()
{
    int num1,num2,result;
    printf("Enter two integer:");
    scanf("%d%d",&num1,&num2);
    result = sum(num1,num2);
    printf("Sum of two integer is:%d",result);
    return 0;
}

