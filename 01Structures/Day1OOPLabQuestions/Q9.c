//9)Write a program to read the name, address,and salary of 5 employees using array of 
//structure.Display information of each employee in alphabetical order of their name. 

#include<stdio.h>
#include<string.h>

struct employee{
	char name[30];
	char address[100];
	int salary;
};
void ShortName(struct employee s[]){
    char sname[30];
    for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
         if(strcmp(s[i].name,s[j].name)>0){
            strcpy(sname,s[i].name);
            strcpy(s[i].name,s[j].name);
            strcpy(s[j].name,sname);
         }
      }
   }
}
void Display(struct employee s[]){
    for(int i=0; i<5; i++){
        printf("Name: ");
        printf("%s \n",s[i].name);
 
        printf("Address: ");
        printf("%s \n",s[i].address);
 
        printf("Salary: ");
        printf("%d \n",s[i].salary);
 
        printf("\n");
    }
}
int main()
{
    struct employee e[5];
    int n;
    for(int i=0;i<5;i++){
        printf("Employee No.%d\n",(i+1));
        printf("Enter Name of Employee:");
        scanf("%s",e[i].name);
        printf("Enter Address of Employee: ");
        scanf("%s",e[i].address);
        printf("Enter salary of Employee: ");
        scanf("%d",&e[i].salary);
        printf("\n\n");
    }
    ShortName(e);
    Display(e);
    return 0;
}
