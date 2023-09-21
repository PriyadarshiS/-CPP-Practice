#include<iostream>
#include<math.h>
using namespace std;
void fun(string);
int addition(int , int);
int main(){
    fun("sanket");
    cout<<addition(2,7);
    return 0;
    
}
void fun(string name){
    cout<<"Are you having fun "<<name<<" ?"<<endl;
}
int addition(int x,int y){
    int result = x + y;
    cout<<sqrt(result)<<endl;
    return result;
}