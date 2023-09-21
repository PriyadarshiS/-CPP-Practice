#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the array elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    bool sorted_flag = true;
    for(int i=1;i<5;i++){
        if(arr[i]<=arr[i-1]){
            sorted_flag = false;
        }
    }
    if(sorted_flag) cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;
    return 0;
}