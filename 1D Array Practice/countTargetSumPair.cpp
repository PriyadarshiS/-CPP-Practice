#include<iostream>
using namespace std;
int main(){
    int arr[] = {-2,-1,0,1,3,4,6,8,11,12};
    int x = 12;
    int n = 10;
    // code to find if there is a pair with sum x
    int i = 0;
    int j = n-1;
    int answer = 0;
    while(i<j){
        if(arr[i] + arr[j] == x){
            answer+=1;
            i++;
            j--;
            // we found a pair
        
        }
        else if(arr[i] + arr[j] < x){
            // sum is less than x, increase the sum
            i++;
        }
        else{
            // sum is more than x, decrease the sum
            j--;
        }
    }
   cout<<answer<<endl;
    return 0;
}