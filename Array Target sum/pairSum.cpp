#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter array elements: ";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    int pair = 0;
    int x;
    cout<<"Enter the Target sum: ";
    cin>>x;
    for(int i = 0;i<6;i++){
        for(int j = i+1 ;j<6;j++){
            if(arr[i]+arr[j]==x){
                cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<" ";
                pair++;
            }
        }
    }
    cout<<endl;
    cout<<"No of pairs  are : "<<pair<<endl;
    return 0;
}