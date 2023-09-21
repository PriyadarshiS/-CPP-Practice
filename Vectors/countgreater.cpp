#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cout<<"Enter elements: ";
        cin>>v[i];
    }
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"Number of elements greater than "<<x<<" are "<<count<<endl;

    return 0;
}