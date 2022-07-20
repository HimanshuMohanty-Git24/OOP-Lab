#include <iostream>

using namespace std;
struct Student{
    string name;
    int roll_num;
    int arr[5];
    void display(){
        cout<<name<<endl;
        cout<<roll_num<<endl;
        
        for(int i=0;i<5;i++){
        cout<<"Subject"<<(i+1)<<":"<<arr[i]<<endl;
        }
    }
};

int main()
{
    struct Student s1;
    cout<<"Enter your name:";
    getline(cin,s1.name);
    cout<<"Enter your roll num:";
    cin>>s1.roll_num;
    for(int i=0;i<5;i++){
        cout<<"Enter your marks in Subject"<<(i+1)<<":";
        cin>>s1.arr[i];
    }
    s1.display();
    

    return 0;
}