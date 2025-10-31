#include <iostream>
using namespace std;

int main(){
    cout << "Enter a string" << endl;
    string user;
    cin >> user;

    string rev = string(user.rbegin(), user.rend());

    if (user == rev){
        cout << " String is palindrome" << endl;
    } else{
        cout << " String is not palindrome" << endl;
    }

    return 0;

}