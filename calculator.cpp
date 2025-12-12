#include <iostream>
using namespace std;

int add (int a , int b){
    return a+b;
}
int subtract( int a, int b){
    return a-b;
}

int multiply (int a, int b){
    return a*b;
}

int division (int a , int b){
    return a/b;
}

void menu(){
    cout << "\n\n1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
}

int main(){
    while (true){
        menu();
        int choice;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        if (choice >=1 and choice <=4){
            int a;
        int b;
        cout << "Enter value 1: " << endl;
        cin >> a;
        cout << "Enter value 2: " << endl;
        cin >> b;
        if (choice == 1){
            cout << "Addition: " << add(a,b);
        }
        else if (choice == 2){
            cout << "SUbtraction: " << subtract(a,b) << endl;
        }
        else if (choice == 3){
            cout << "Multiplication: " << multiply(a,b) << endl;
        }
        else if (choice == 4){
            if (b== 0){
                cout << "Can't divide by zero" << endl;
            } else{
                cout << "Division: " << division (a,b) << endl;
            }
        }
        }
        else if (choice == 5){
            cout << "Good Bye!" << endl;
            break;
        }
        else {
            cout << "Invalid choice....";
        }
    }
}