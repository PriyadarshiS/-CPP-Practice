#include<iostream>
using namespace std;
int main(){
    int a=6;
    cout<<(a++)<<endl;//6
    cout<<a<<endl;//7
    int b=5;
    cout<<(--b)<<endl;//4
    int x=-1,y=4,z=1,d;
    d=++x&&++y||++z;
    cout<<x<< y<< z<< d<<endl;
    return 0;
}