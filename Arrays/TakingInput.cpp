#include<iostream>
using namespace std;
int main(){
    char vowels[5];
    cout<<"Using for loop "<<endl;
    cout<<"enter the elements: ";
    for(int i=0;i<5;i++){
        cin>>vowels[i];
    }
     for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }
    cout<<endl;
    cout<<"Using for each loop "<<endl;
    cout<<"Enter elements: ";
    for(char &elements:vowels){
        cin>>elements;
    }
    for(char elements:vowels){
        cout<<elements<<" ";
    }
    return 0;
}