#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows: ";
    cin>>m;
    cout<<"Enter columns: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}