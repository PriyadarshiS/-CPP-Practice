#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate_array(vector<vector<int>> &v,int n){
    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    // reverse every row
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    return;
}
int main(){
    int n;
    cout<<"Enter rows/colums: ";
    cin>>n;
    vector<vector<int>>vec(n,vector<int> (n));
    cout<<"Enter the matrix elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    rotate_array(vec,n);
    cout<<"Array after rotation is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}