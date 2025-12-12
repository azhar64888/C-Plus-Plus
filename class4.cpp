#include <iostream>
using namespace std;

class rectangle{
    int l,w;
    public:
     rectangle(int a, int b){
        l=a;
        w=b;
     }
    
    int area(){
        return (l*w);
    }
};

int main(){
    rectangle r1(4,5);
    rectangle r2(7,5);

    if (r1.area() > r2.area()){
        cout << "Object 1 has greater area" << endl;
    }
    else if (r2.area() > r1.area()){
        cout << "Object 2 has greater area" << endl;
    } else {
        cout << "Both object has equal area" << endl;
    }
    
}