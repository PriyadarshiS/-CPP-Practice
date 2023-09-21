#include<iostream>
using namespace std;
int main(){
    int arr[]={9,23,45,69,78};
    int n = 5;
    int x = 22;    
    // code to check whether there is any pair with the given abs diff
    int i = 0;
    int j = 1;
    bool found = false;
    while(i < n and j < n){
        if(abs(arr[i]-arr[j]) == x){
            found = true;
            break;
        }
        else if(abs(arr[i] - arr[j]) < x){
            j++;
        }
        else{
            i++;
        }
    }
    if (found == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}