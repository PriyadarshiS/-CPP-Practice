#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    int i=1;// loop variable
    while(i<=n){// condition
        sum+=i;
        i++;// updating loop variable
    }
    cout<<"The sum of first n natural numbers is: "<<sum<<endl;
    return 0;
}