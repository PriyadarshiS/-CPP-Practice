#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// int maximum_ones_row(vector<vector<int>> &v){
//     int max_ones = INT_MIN;
//     int max_ones_row = -1;
//     int columns = v[0].size();
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int number_of_ones = columns - j;
//                 if(number_of_ones > max_ones ){
//                     max_ones = number_of_ones;
//                     max_ones_row = i;
//                 }
//                 break;
//             }
//         }
//     }
//     return max_ones_row;

// }
int leftmost_one_row(vector<vector<int>> &v){


    int leftmost_one = -1;
    int max_ones_row = -1;
    // finding leftmost one in 0th row.
    int j = v[0].size() - 1;
    while(j>=0 && v[0][j] == 1){
        
        leftmost_one = j;
        max_ones_row = 0;
        j--;
    }
    // check in rest of the rows if we can find a one left to the leftmost_one
    for(int i=1;i<v.size();i++){
        while(j>=0 and v[i][j]==1){   
            leftmost_one = j;
            j--;
            max_ones_row = i;
        }
    }
    return max_ones_row ;

    // for(int j=v[0].size()-1;j>=0;j--){
    //     if(v[0][j]==1){
    //         leftmost_one = j;

    //     }
    //     else{
    //         break;
    //     }
        

    // }
}
int main(){
    int n,m;
    cout<<"Enter rows and columns: ";
    cin>>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    // int res = maximum_ones_row(vec);
    // if(res == -1) cout<<"No 1 is present in 2d array!"<<endl;
    // else {
    //     cout<<"The row with maximum number of 1's is : "<<res<<endl;
    // }
    int res = leftmost_one_row(vec);
    if(res == -1) cout<<"No 1 is present in 2d array !"<<endl;
    else cout<<"The row with maximum number of 1's is : "<<res<<endl;

    return 0;
}
