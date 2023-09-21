#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
void fun(int *x){
    cout<<x<<endl;
    cout<<*x<<endl;
}
int main(){
    int x = 9;
    int c=1;
    int &y = x;
    swap(x,c);
    cout<<x<<" "<<c<<endl;
    int a = 9;
    fun(&a);
    // cout<<x<<" "<<y<<endl;
    // y=88;
    // cout<<x<<" "<<y<<endl;
    return 0;
}