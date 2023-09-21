#include<iostream>
using namespace std;
void change_value(int z){
    z=100;
}
int main(){
    int a=5;
    change_value(a);
    cout<<a<<endl;
    return 0;
}