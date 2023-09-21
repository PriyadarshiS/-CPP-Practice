#include<iostream>
using namespace std;
int addition(int x, int y){
    int result = x + y;
    return result;
}
void fun(string name){
    cout<<"Are you having fun "<<name<<" ?"<<"\n";
}
int main(){
    
      fun("Sanket");
        int response = addition(10,5);
        cout<<response;

      return 0;
}