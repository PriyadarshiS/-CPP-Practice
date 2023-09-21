#include<iostream>
using namespace std;
int sum_in_range(int x, int y){
    int result = 0;
    for(int i = x; i<=y; i++){
        result +=i;
    }
    return result;
}
int sum_in_range_optimised(int x, int y){
    int n = (y - x + 1);
    int a = x;
    int result = (n * (2*a + (n-1)*1)) / 2;
    return result;
}
int main(){
    int x = 2;
    int y = 5;
    cout<<sum_in_range_optimised(2,6)<<endl;


    return 0;
}