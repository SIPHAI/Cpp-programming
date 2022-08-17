#include <iostream>
 
using namespace std;
 
class Student {
    private:
    char name[30];
    long score;
    char clas[30];
 
    public:
    void getStudent()   
        {
        cout<<"Enter name of student :";
        cin>>name;
        cout<<"Enter score of student :";
        cin>>score;
        cout<<"Enter class of student :";
        cin>>clas;
        
    }
 
    void showStudent() {
       
        cout << "Name " << name << endl;
        cout << "score " << score << endl;
        cout << "clas" << clas << endl;
    }
 
};
int main() {
   
    Student student[3];
    for (int i = 0; i <= 2; i++) {
        student[i].getStudent();
    }
     cout << "Student Details are" << endl;
    for (int i = 0; i <= 2; i++) {
        student[i].showStudent();
    }
 }