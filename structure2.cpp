#include <iostream>
using namespace std;

int main(){
    struct laptop {
        string brand;
        int ram;
        float price;
    };

    string Userbrand; int userram; float userprice;
    cout << "Enter Laptop brand:" << endl;
    cin >> Userbrand;
    cout << "Enter Ram size (In GB):" << endl;
    cin >> userram;
    cout << "Enter Laptop Price: " << endl;
    cin >> userprice;

    laptop l1;
    l1.brand=Userbrand;
    l1.ram = userram;
    l1.price= userprice;


    cout << "Brand:" << l1.brand << endl;
    cout << "Ram (in GB):" << l1.ram << endl;
    cout << "Price: " << l1.price << endl;

    
}