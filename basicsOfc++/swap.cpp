#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"A: "<<a<<endl;
    cout<<"b: "<<b<<endl;
        return 0;
}