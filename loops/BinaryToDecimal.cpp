#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number that you want to convert to decimal: ";
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int lastdigit=n%10;
        ans+=lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<"The decimal form of number is: "<<ans<<endl;
    return 0;
}