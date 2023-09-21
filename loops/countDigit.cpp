#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int digit=0;
    while(n>0){
        digit++;;
        n=n/10;
    }
    cout<<"Number of digits is "<<digit<<endl;
    return 0;
}