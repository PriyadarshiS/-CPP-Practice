#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
    rectangle(){ // default constructor - no argument passed
        l = 0;
        b = 0;
    }
    rectangle(int x,int y){ // parameterized constructor - arg passed
        l=x;
        b=y;
    }
    rectangle(rectangle& r) {  // copy constructor - initialise an obj by another existing obj
    l=r.l;
    b=r.b;
    }
    ~rectangle(){  // destructor
        cout<<"Destructor is called"<<endl;
    }
};
int main(){
    rectangle* r1 = new rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;
    rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;
    rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}