#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value that you want to search: ";
    cin>>key;
    int ans = -1;
    for(int i = 0 ;i<5;i++){
        if(arr[i]==key){
            ans = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}