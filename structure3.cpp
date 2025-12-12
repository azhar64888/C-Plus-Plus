#include <iostream>
using namespace std;

int main(){
    struct Rectangle
    {
        float length;
        float width;
    };

    float userlength; float userwidth;
    cout << "Enter length value: " << endl;
    cin >> userlength;
    cout << "Enter width value: " << endl;
    cin >> userwidth;

    Rectangle r1;
    r1.length=userlength;
    r1.width=userwidth;

    cout << " Total area = " << r1.length * r1.width << endl;
    
}