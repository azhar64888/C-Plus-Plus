#include <iostream>
using namespace std;

class rectangle{
    int l,w;
    public:
     rectangle(int a, int b){
        l=a;
        w=b;
     }
    
    int perimeter(){
        return 2*(l+w);
    }
};

int main(){
    rectangle r(4,5);
    cout << "Perimeter is: " << r.perimeter() << endl;
}
