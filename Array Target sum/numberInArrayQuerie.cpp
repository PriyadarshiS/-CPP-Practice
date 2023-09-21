// given Q queries,check if the given number is present in the array or not. 
//NOTE: value of all the elements int the array is less than 10 raised to the power 5
// check occurence 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    const int N = 1e5+10; // represents 10 raised to the power 5
    vector<int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }


    int queries;
    cout<<"Enter number of queries: ";
    cin>>queries;
    cout<<"Enter querie elements: ";
    while(queries--){
        int querie_element;
        cin>>querie_element;
        cout<<"Frequency of "<<querie_element<<" is "<<freq[querie_element]<<endl;  // how many times it is present
    }
    
    return 0;
}