#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int line=0;line<n;line++){
        for(int i=0;i<n;i++){
            if(i==n/2) cout<<"*"<<" ";
            else if(line==n/2) cout<<"*"<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
    // int x=n/2+1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==x || j==x){
    //             cout<<"*"<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    return 0;
}