/*
Himanshu Mohanty
2105719
CSE36
OOP LAB 1 Q1
*/
#include <stdio.h>

struct Student{
	char name[30];
	int rollNumber;
	int marks[5];
	int totalMarks; 
	float percentage;
}; 
void display(struct Student s){
        printf("Name:%s\n",s.name);
        printf("Roll Number:%d\n",s.rollNumber);
        
        for(int i=0;i<5;i++){
            printf("Marks in Subject%d:%d\n",(i+1),s.marks[i]);
        }
    }
int main()
{
    struct Student s1;
    printf("Enter your name:");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter your Roll Number:");
    scanf("%d",&s1.rollNumber);
    for(int i=0;i<5;i++){
        printf("Enter your marks in Subject%d:",(i+1));
        scanf("%d",&s1.marks[i]);
    }
    printf("\n\n");
    display(s1);
    return 0;
}
