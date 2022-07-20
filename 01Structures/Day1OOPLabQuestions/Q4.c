//4)WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.
#include <stdio.h>

int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result = fact(n);
    printf("Factorial of the number is:%d",result);
    return 0;
}

