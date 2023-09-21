#include<iostream>
using namespace std;
int add(int a,int b=1,int c=2){
    return (a+b+c);
}
int main(){
    cout<<add(2)<<endl;
    cout<<add(2,2)<<endl;
    cout<<add(2,2,3)<<endl;
    return 0;
}
// void decrease(int n1,int n2){
//     n1--;
//     n2-=2;
//     cout<<n1<<":"<<n2;
// }
// int main(){
//     int p=26;
//     int q=13;
//     decrease(p,q);
//     cout<<p<<":"<<q;
// }