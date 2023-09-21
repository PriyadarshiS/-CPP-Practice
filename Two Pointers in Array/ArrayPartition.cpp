// check if we can partion the array into two subarrays with equal sum. more formally chaeck that the prefix sum of a part of array is equal to the suffix sum of rest of the array
#include<iostream>
#include<vector>
using namespace std;
bool check_prefix_suffix_sum(vector <int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    int prefix_sum = 0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum = total_sum - prefix_sum;
        if(suffix_sum==prefix_sum){
            cout<<"Partition is possible at index "<<i<<endl;
            return true;
        }
    }
    return false;

}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<check_prefix_suffix_sum(v)<<endl;
    return 0;
}