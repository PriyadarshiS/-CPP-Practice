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
    cout<<"Enter the value for which you want the last occurance: ";
    cin>>x;
    int occurance = 0;
  for(int ele:v){
    if(ele==x){
        occurance++;
    }
  }
    cout<<"Number of occurance is : "<<occurance<<endl;
    return 0;
}