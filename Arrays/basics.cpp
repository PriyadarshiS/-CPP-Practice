#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    cout<<"memory size of array is : "<<sizeof(arr)<<endl;
    int x = sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of array is : "<<x<<endl;
    int array[4];
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    return 0;
}