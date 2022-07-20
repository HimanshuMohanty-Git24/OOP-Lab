#include <iostream>

using namespace std;
struct Student{
    string name;
    int roll_num;
    int arr[5];
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"RollNo:"<<roll_num<<endl;
        
        for(int i=0;i<5;i++){
        cout<<"Subject"<<(i+1)<<":"<<arr[i]<<endl;
        }
        cout<<"Total marks obtained out of 500:"<<totalMarks()<<endl;
        cout<<"Percentage:"<<percentage()<<"%"<<endl;
    }
    int totalMarks(){
        int total=0;
        for(int i=0;i<5;i++){
            total=total+arr[i];
        }
        return total;
    }
    float percentage(){
        return((float(totalMarks())/float(500))*float(100));
    }
    void percentRange(int lb,int up)
    {
        if(percentage()>lb && percentage()<up){
            display();
            cout<<endl;
        }
    }
    void searchByRoll(int roll){
        if(roll==roll_num){
            display();
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of Student:";
    cin>>n;
    struct Student s[n],t;
    for(int k=0;k<n;k++)
    {
        cout<<"STUDENT"<<(k+1)<<endl;
        cout<<"Enter your name:";
        cin>>s[k].name;
        cout<<"Enter your roll num:";
        cin>>s[k].roll_num;
        for(int i=0;i<5;i++){
            cout<<"Enter your marks in Subject"<<(i+1)<<":";
            cin>>s[k].arr[i];
        }
        cout<<endl<<endl;
    }
    cout<<endl<<endl;
    int roll;
    cout<<"Enter the Roll number you want to find:";
    cin>>roll;
    for(int k=0;k<n;k++)
    {
        s[k].searchByRoll(roll);
    }
    int lb,ub;
    cout<<endl<<endl;
    cout<<"Find the Detail within range"<<endl;
    cout<<"Enter the lower bound:";
    cin>>lb;
    cout<<"Enter the Upper bound:";
    cin>>ub;
    for(int k=0;k<n;k++){
        s[k].percentRange(lb,ub);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j].totalMarks()<s[j+1].totalMarks())
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    cout<<"\nStudent info in terms of marks from highest to lowest\n";
    cout<<"\nROLL_NO\t\tNAME\t\tMARKS\n";
    cout<<"-------------------------------------------------------------------------------\n";
    for(int i=0;i<n;i++)
    {
        cout<<s[i].roll_num<<"\t\t\t"<<s[i].name<<"\t\t\t"<<s[i].totalMarks()<<endl;
    }
    
    return 0;
}
