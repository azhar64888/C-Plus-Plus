#include <iostream>
using namespace std;

class square{
    int side;
    public:
     square(int a){
        side=a;
     }
    float area(){
        return side * side;
    }
};

int main(){
    square s(4);
    cout << "Square area is:" << s.area() << endl;
}
