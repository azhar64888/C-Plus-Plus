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
        return l*w;
    }
};

int main(){
    rectangle r(4,5);
    cout << "Area of rectangle is: " << r.area() << endl;
}
