#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout<<"Enter array elements: ";
    for(int i =0;i<7;i++){
        cin>>arr[i];
    }
    int triplets = 0;
    int x; // target sum
    cout<<"Enter target sum : ";
    cin>>x;
    for(int i = 0;i<7;i++){
        for(int j = i+1;j<7;j++){
            for(int k = j+1;k<7;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<" ";
                    triplets++;
                }
            }
        }
    }
    cout<<endl;
    cout<<"TOtal number of triplets are : "<<triplets<<endl;
    return 0;
}