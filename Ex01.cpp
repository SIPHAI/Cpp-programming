// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct student{
    string Name;
    int Age,ID;
    char Gender;
};
void display()
{
    struct student Siphai;
    cout<<"Enter student ID :";
    cin>>Siphai.ID;
    cout<<"Enter Student's Name:";
    cin>>Siphai.Name;
    cout<<"Enter student Gender :";
    cin>>Siphai.Gender;
    cout<<"Enter student's age :";
    cin>>Siphai.Age;
    cout<<"==================="<<endl<<"Studen ID: "<<Siphai.ID<<endl<<"Student's Name:"<<endl<<Siphai.Name<<endl<<"Gender:"<<Siphai.Gender;
    
}
int main(void){
    display();
}