/*
Himanshu Mohanty
2105719
CSE36
OOP LAB 1 Q2
*/

#include <stdio.h>


struct Student{
    char name[25];
    int roll;
    int marks[5];
    int totalmarks;
    float percentage;
};

void displayStudentDetails(struct Student stu[], int stu_number){
int i,j;
for(i=0;i<stu_number;i++){
    for(j=0;j<5;j++){
        stu[i].totalmarks+=stu[i].marks[j];
        stu[i].percentage=stu[i].totalmarks*0.4;
    }
}
for(i=0;i<stu_number;i++){
    printf("\nTotal Marks of Student %d: %d",i+1,stu[i].totalmarks);
    printf("\nPercentage of Student %d: %.2f",i+1,stu[i].percentage);
}
}


void searchByRoll(struct Student stu[], int stu_number, int rollNo){
    int i,j;
    for(i=0;i<stu_number;i++){
        if(rollNo==stu[i].roll){
            printf("\nName of Student %d: %s",i+1, stu[i].name);
            printf("\nRoll No: %d",stu[i].roll);
            printf("\nTotal Marks: %d",stu[i].totalmarks);
            printf("\nPercentage: %.2f",stu[i].percentage);
        }
    }
}

void sortByMarks(struct Student stu[], int stu_number){
    int i,j;
    for(i=0;i<stu_number;i++){
        for(j=0;j<stu_number;j++){
            if(stu[j].totalmarks>stu[j+1].totalmarks){
            struct Student temp=stu[j];
            stu[j]=stu[j+1];
            stu[j+1]=temp;
        }
        }

        for(i=0;i<stu_number;i++){
            printf("\n\nName of Student %d: %s",i+1,stu[i].name);
            printf("\nRoll of Student %d: %d",i+1,stu[i].roll);
            printf("\nTotal Marks of Student %d: %d",i+1,stu[i].totalmarks);
            printf("\nPercentage of Student %d: %.2f",i+1,stu[i].percentage);
        }

    }
}

void percentRange(struct Student stu[],int stu_number, int range1, int range2){
    int i;
    for(i=0;i<stu_number;i++){
        if(stu[i].percentage>range1 && stu[i].percentage<range2){
            printf("\n\nName of Student %d: %s",i+1,stu[i].name);
            printf("\nRoll of Student %d: %d",i+1,stu[i].roll);
            printf("\nTotal Marks of Student %d: %d",i+1,stu[i].totalmarks);
            printf("\nPercentage of Student %d: %.2f",i+1,stu[i].percentage);
        }
    }

}

int main(){
    
    struct Student stu[100];

    int i,j,stu_number;
    int rollNo;
    int range1,range2;

    printf("Enter the number of students: ");

    scanf("%d",&stu_number);
    for(i=0;i<stu_number;i++){
        printf("STUDENT %d\n",(i+1));
        printf("Enter Name of Student %d: ",i+1);
        scanf("%s",stu[i].name);
        printf("\nEnter Roll: ");
        scanf("%d",&stu[i].roll);
        printf("\nEnter Marks: ");
        for(j=0;j<5;j++){
            printf("\nMark %d: ",j+1);
            scanf("%d",&stu[i].marks[j]);
        }
        printf("\n\n");
    }

    for(i=0;i<stu_number;i++){
        printf("\n\nName of Student %d: %s",i+1,stu[i].name);
        printf("\nRoll of Student %d: %d",i+1,stu[i].roll);
        for(j=0;j<5;j++){
            printf("\nMark %d: %d",j+1,stu[i].marks[j]);
        }
    }

    displayStudentDetails(stu,stu_number);
    printf("\n\n");
    printf("Enter Desired Roll No. Ror Details: ");
    scanf("%d",&rollNo);
 

    searchByRoll(stu,stu_number,rollNo);
    printf("\n\n");
    sortByMarks(stu,stu_number);
    printf("\n\n");
    printf("Find Details Within Range!\n");
    printf("\nEnter The Lower Bound: ");
    scanf("%d",&range1);
    printf("\nEnter The Upper Bound: ");
    scanf("%d",&range2);
    printf("\n\n");
    percentRange(stu,stu_number,range1,range2);

    return 0;
}