#include<iostream>
using namespace std;
void square(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }
}
// int square(int x){
//     return x*x;
// }
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // for(int i=1;i<=5;i++){
    //     cout<<square(i)<<" ";
    // }
    square(n);
    return 0;
}