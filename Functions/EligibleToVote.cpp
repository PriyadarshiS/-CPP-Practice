#include<iostream>
using namespace std;
bool check_eligible(int age,int limit){
    if(age>=limit){
        // person is eligible
        return true;
    }
    else{
        // person is not eligible
        return false;
    }
}
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    int voting_limit = 18;
    int is_eligible_for_voting = check_eligible(age,voting_limit);
    if(is_eligible_for_voting){
        cout<<"Yes, the current person is eligible to vote";
    }
    else{
        cout<<"No, the current person is not eligible to vote";
    }
    return 0;

}