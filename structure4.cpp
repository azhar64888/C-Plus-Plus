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

    string Username1; int userRoll1; float userGpa1;
    cout << "Enter your name2:" << endl;
    cin >> Username1;
    cout << "Enter your roll number2:" << endl;
    cin >> userRoll1;
    cout << "Enter your Gpa2: " << endl;
    cin >> userGpa1;

    student s2;
    s2.name=Username1;
    s2.roll = userRoll1;
    s2.Gpa= userGpa1;


    if ( s1.Gpa > s2.Gpa){
        cout << "Student 1 Gpa is higher" << endl;
        cout << "STudent 1 Details: " << endl;
        cout << "Name:" << s1.name << endl;
        cout << "Roll No:" << s1.roll << endl;
        cout << "Gpa: " << s1.Gpa << endl;
    } else if ( s2.Gpa > s1.Gpa){
        cout << "Student 2 Gpa is higher" << endl;
        cout << "STudent 2 Details: " << endl;
        cout << "Name:" << s2.name << endl;
        cout << "Roll No:" << s2.roll << endl;
        cout << "Gpa: " << s2.Gpa << endl;
    } else {
        cout << "Both student Gpa is equal" << endl;
    }

    
}