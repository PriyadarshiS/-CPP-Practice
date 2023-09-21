#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    // for loop
    cout<<"Using for loop "<<endl;
    for(int i=0;i<5;i++){
        int element;
        cout<<"Enter element: ";
        cin>>element;
        v.push_back(element);

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // for each loop
    cout<<"Using for each loop "<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    // while loop
    cout<<"Using while loop "<<endl;
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    cout<<endl;
    
    return 0;
}