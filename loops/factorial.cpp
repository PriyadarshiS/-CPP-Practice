#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
        cout<<"Factorial of "<<i<<" "<<"is "<<factorial<<endl;
        
    }
    return 0;
}
