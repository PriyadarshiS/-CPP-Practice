#include<iostream>
using namespace std;
float circumference(float r){
    float result = 2*3.14*r;
    return result;
}
float area(float r){
    float result = 3.14 * r * r;
    return result;
}
int main(){
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Area: "<<area(radius)<<endl;
    cout<<"Circumference: "<<circumference(radius)<<endl;
    return 0;
}