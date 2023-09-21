// given an array sorted in non-decreasing order,return an array of the square of each number sorted in non-decreasing order
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorted_squared_array(vector<int>&v){
    vector<int>ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<"The sorted array is: "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;


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
    sorted_squared_array(v);
    
    return 0;
}