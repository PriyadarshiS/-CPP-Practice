#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"The sum of elements is: "<<sum<<endl;
    return 0;
}