#include <iostream>
using namespace std;

// 1
struct student
{
  string name;
  int totalSubjects;
  int marks[20];
};

// 2
void printStudentDetails(student students[], int totalStudents)
{
  // 3
  for (int i = 0; i < totalStudents; i++)
  {
    cout << "Student name : " << students[i].name << endl;
    cout << "Marks :" << endl;
    for (int j = 0; j < students[i].totalSubjects; j++)
    {
      cout << students[i].marks[j] << endl;
    }
  }
}
int main()
{
  // 4
  int totalStudents;

  cout << "Enter total number of students : ";

  cin >> totalStudents;

  // 5
  if (totalStudents <= 0)
  {
    cout << "Please enter a valid number" << endl;
    return -1;
  }

  student studentArray[totalStudents];

  // 6
  for (int i = 0; i < totalStudents; i++)
  {
    // 7
    cout << "Enter the name of student " << (i + 1) << " : " << endl;
    cin >> studentArray[i].name;

    cout << "Enter total number of subjects : ";
    cin >> studentArray[i].totalSubjects;

    // 8
    if (studentArray[i].totalSubjects > 20 || studentArray[i].totalSubjects <= 0)
    {
      cout << "Please enter a valid number" << endl;
      return -1;
    }

    // 9
    for (int j = 0; j < studentArray[i].totalSubjects; j++)
    {
      cout << "Enter marks for subject " << (j + 1) << " : " << endl;
      cin >> studentArray[i].marks[j];
    }
  }

  printStudentDetails(studentArray, totalStudents);
}