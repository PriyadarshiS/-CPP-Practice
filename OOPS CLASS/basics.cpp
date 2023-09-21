#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    string colour;
};
int main(){
    fruit apple; //  object
    apple.name="Apple";
    apple.colour="red";
    cout<<apple.name<<" - "<<apple.colour<<endl;
    fruit *mango = new fruit();
    mango->name = "Mango";
    mango->colour = "Yellow";
    cout<<mango->name<<" - "<<mango->colour<<endl;



    return 0;
}