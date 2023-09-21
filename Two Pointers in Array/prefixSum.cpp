// given an integer array 'a',ruturn the prefix sum /running sum in the same array without using new array
// input -> 5,4,1,2,3
// output -> 5,9,10,12,15
#include<iostream>
#include<vector>
using namespace std;
void running_sum(vector<int>&v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    running_sum(v);
    cout<<"The array after prefix sum is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}