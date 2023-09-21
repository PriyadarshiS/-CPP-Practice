#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout<<"Enter array elements: ";
    for(int i = 0;i<7;i++){
        cin>>arr[i];
    }
    // int evenSum = 0,oddSum = 0;
    // for(int i = 0;i<7;i++){
    //     if(i%2==0){
    //         evenSum+=arr[i];
    //     }
    //     else{
    //         oddSum += arr[i];
    //     }
    // }
    // int differance = evenSum - oddSum; 
    int ans = 0;
    for(int i =0 ;i<7;i++){
        if(i%2==0){
            ans+=arr[i];
        }
        else{
            ans-=arr[i];
        }
    }
    cout<<"The difference betwwen elements at even and odd index is : "<<ans<<endl;

    return 0;
}