#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"enter column: ";
    cin>>column;
    cout<<"enter array elements: ";
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}