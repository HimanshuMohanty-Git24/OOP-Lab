/*
Himanshu Mohanty
2105719
CSE36
OOP LAB 1 Q3
*/
#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int id;
    char name[20];
    int age;
    int basicsalary;
};
int main()
{
    // struct employee e[100];
    struct employee *ptr;
    int n;
    float DA,HRA;
    float Gross_salary;
    printf("Enter the number of employee: \n");
    scanf("%d",&n);
    ptr=(struct employee*)malloc(n*sizeof(struct employee));
    for(int i=0;i<n;i++)
    {
        printf("Enter the ID of Employee\n");
        scanf("%d",&(ptr+i)->id);
        printf("Enter the Employee name\n");
        scanf("%s",(ptr+i)->name);
        printf("Enter the employee age\n");
        scanf("%d",&(ptr+i)->age);
        printf("Enter the basic salary of the employee\n");
        scanf("%d",&(ptr+i)->basicsalary);
    }
    for(int k=0;k<n;k++)
    {
        DA=0.8*((ptr+k)->basicsalary);
        HRA=0.1*((ptr+k)->basicsalary);
        Gross_salary=(ptr+k)->basicsalary+DA+HRA;
        printf("DA : %f\n",DA);
        printf("HRA : %f\n",HRA);
        printf("gross_salary : %f\n",Gross_salary);
        printf("\n");
    }
    printf("The Employee data's are as follows\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\t%s\t%d\t%d\n",((ptr+j)->id),((ptr+j)->name),((ptr+j)->age),((ptr+j)->basicsalary));
    }
    return 0;
}