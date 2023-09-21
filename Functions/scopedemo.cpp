#include<iostream>
using namespace std;
string name = "sanket";
void fun(){
    int x = 10;
    for(int y = 0;y < 5;y++){
        x = x + y;
        int z = x*x;
    }
   // cout<<x<<" "<<y<<" "<<z<<endl; //  y and z is not accesible here because they are local to for loop
    cout<<name<<endl;
}
int main(){
    cout<<name<<endl;
    name = "sarthak";
    fun();
    return 0;
}