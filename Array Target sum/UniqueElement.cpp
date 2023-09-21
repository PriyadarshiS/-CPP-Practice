// Array Manipulation
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout<<"Enter array elements: ";
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    for(int i =0;i<7;i++){
        for(int j = i+1;j<7;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    int unique = 0;
    for(int i=0;i<7;i++){
        if(arr[i]>0){
            cout<<"The unique element is: "<<arr[i];

          }
    }
    return 0;
}