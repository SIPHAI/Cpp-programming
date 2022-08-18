
//Siphai
#include <iostream>
using namespace std;

int student[60];
int main()
{

    int i = 0, j = 0;
    cout << "\nThis is the list of student's name and score.";
    cout << "\n===============================================";
    cout << "\nHow many student is the class?: ";
    cin >> i;
    string arr[i][2];
    while (j < i)
    {
        string name;
        cout << "Student "<<j+1<< ": ";
        cin >> arr[j][0];
        cout << "Score "<<j+1<< ": ";
        cin >> arr[j][1];

        j++;
    }
    int num = 0;
    while (num < i)
    {
        cout << "\n___________________________";
        cout << "\nStudent " << num+1 << " is: " << arr[num][0] << " Score: " << arr[num][1];
        num++;
    }
}
