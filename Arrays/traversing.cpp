#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    // for loop
    cout<<"Using for loop"<<endl;
    for(int i = 0;i < 4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
            // for each loop
            cout<<"Using for each loop"<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"Using while loop"<<endl;
    // while loop
    int index = 0;
    while(index<4){
        cout<<arr[index]<<" ";
        index++;
    }
    cout<<endl;
    return 0;
}