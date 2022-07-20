/*
8) Define a structure of employee having data members name, address, age and salary. 
Take the data for n employees in an array and find the average salary.
*/ 
#include<stdio.h>

using namespace std;
struct employee{
	char name[30];
	char address[100];
	int age;
	int salary;
};
int AvgSalOfEmployee(struct employee s[],int num){
    int avgsalary=0;
    for(int j=0;j<num;j++){
        avgsalary = avgsalary+s[j].salary;
    }
    avgsalary=avgsalary/num;
    return avgsalary;
}
int main()
{
    struct employee e[100];
    int n,Avgsal;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Employee No.%d\n",(i+1));
        printf("Enter Name of Employee:");
        scanf("%s",e[i].name);
        printf("Enter Address of Employee: ");
        scanf("%s",e[i].address);
        printf("Enter Age of Employee:");
        scanf("%d",&e[i].age);
        printf("Enter salary of Employee: ");
        scanf("%d",&e[i].salary);
        printf("\n\n");
    }
    Avgsal=AvgSalOfEmployee(e,n);
    printf("Average Salary of Employees is:%d",Avgsal);
    return 0;
}
