#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int line=1;line<=n;line++){
        // this loop does some work for each line
        // below loop is to print spaces
        int no_of_spaces=(n-line);
        for(int k=0;k<no_of_spaces;k++){
            cout<<"  ";
        }
        // below loop is to print chars for each line
        int no_of_chars=2*line-1;
        for(int j=0;j<no_of_chars;j++){
            char ch=(char)('A'+j);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    for(int line=n+1;line<=2*n-1;line++){
        int no_of_spaces=(line-n);
        for(int k=0;k<no_of_spaces;k++){
            cout<<"  ";
        }
        int no_of_chars=2*(2*n-line)-1;
        for(int j=0;j<no_of_chars;j++){
            cout<<(char)('A'+j)<<" ";
        }
        cout<<"\n";
    }
        return 0;
}