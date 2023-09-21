// given an array of integers of size n.Answer q queries where you need to print the sum of values in a given range of indices from l to r(both included).
// Note: The value of l and r in queries follow 1-based indexing.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> v(n+1,0);
    cout<<"Enter the elements: ";
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    // calculate the prefix sum
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    while(q--){
        int l,r;
        cout<<"Enter the values of l and r: ";
        cin>>l>>r;
        int ans = 0;
        // ans = prefix sum array[r] - preeefix sum array[l-1];
        ans = v[r] - v[l-1];
        cout<<"The sum of elements from range "<<l<<" to "<<r<<" is : "<<ans<<endl;
        cout<<endl;
    }  
    return 0;
}