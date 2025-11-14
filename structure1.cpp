#include <iostream>
using namespace std;

int main(){
    struct student {
        string name;
        int roll;
        float Gpa;
    };

    string Username; int userRoll; float userGpa;
    cout << "Enter your name:" << endl;
    cin >> Username;
    cout << "Enter your roll number:" << endl;
    cin >> userRoll;
    cout << "Enter your Gpa: " << endl;
    cin >> userGpa;

    student s1;
    s1.name=Username;
    s1.roll = userRoll;
    s1.Gpa= userGpa;


    cout << "Name:" << s1.name << endl;
    cout << "Roll No:" << s1.roll << endl;
    cout << "Gpa: " << s1.Gpa << endl;

    
}