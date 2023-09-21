#include<iostream>
#include<vector>
using namespace std;
void reverse(int arr[],int si,int ei){
    // int i=si;
    // int j=ei;
    // while(i<j){
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     i++;
    //     j--;
    // }
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
  int arr[7];
    int n;
    cout<<"Enter how many elements you want in array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter how many steps how to rotate the array: ";
    cin>>k;
    if(k>n) k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
     cout<<"Rotated array is: "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
     
    }






    // one method using vectors


    // vector<int>v;
    // int n;
    // cout<<"Enter how many elements you want in array: ";
    // cin>>n;
    // cout<<"Enter elements: ";
    // for(int i= 0;i<n;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }
    //  int k;
    // cout<<"Enter how many steps how to rotate the array: ";
    // cin>>k;
    // if(k>n) k=k% v.size();
    // reverse(v.begin(),v.end());
    // reverse(v.begin(),v.begin()+k);
    // reverse(v.begin()+k,v.end());
    // for(int a:v){
    //     cout<<a<<" ";
    // } cout<<endl;


  // other method using loops 


    // int arr[7];
    // int n;
    // cout<<"Enter how many elements you want in array: ";
    // cin>>n;
    // cout<<"Enter array elements: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int k;
    // cout<<"Enter how many steps how to rotate the array: ";
    // cin>>k;
    // if(k>n) k=k%n;
    // int ansArr[7];
    // int j=0;

    // // inserting last k elements in ans array
    // for(int i=n-k;i<n;i++){
    //     ansArr[j++]=arr[i];
    // }
    // // inserting first n-k elements in ans array
    // for(int i=0;i<=k;i++){
    //     ansArr[j++]=arr[i];
    // }
    // cout<<"Rotated array is : "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<ansArr[i]<<" ";
    // }
    return 0;
}