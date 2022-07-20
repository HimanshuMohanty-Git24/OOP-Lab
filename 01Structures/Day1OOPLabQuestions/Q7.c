//7) WAP to test whether a number n is palindrome number or not.
#include <stdio.h>
int PalindromeNum(int num){
    int r,rev=0;
    while(num!=0)
    {
        r=num%10;
        num=num/10;
        rev=rev*10+r;
    }
    return rev;
}
int main()
{
    int n,m,result;
    printf("Enter a number : ");
    scanf("%d",&n);
    m=n;
    result = PalindromeNum(n);
    if(result == m)
    {
        printf("This is a palindromic number");
    }
    else
        printf("This number is not a palindromic number");
    

    return 0;
}

