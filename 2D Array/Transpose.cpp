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
    cout<<"The original matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrix after transpose is: "<<endl;
    int transpose[column][row];
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            transpose[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}