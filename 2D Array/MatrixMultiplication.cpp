#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Rows and column of 1st matrix: ";
    cin>>r1>>c1;
    int A[r1][c1];
    cout<<"Enter elements of 1st matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int r2,c2;
    cout<<"Enter rows and column of 2nd matrix: ";
    cin>>r2>>c2;
    int B[r2][c2];
    cout<<"Enter elements of 2nd matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    if(c1 !=r2 ) {
        cout<<"Matrix multiplication not possible for this input!";
        return 0;
    }
    int C[r1][c2];
    for(int i=0;i<r1;i++){
        
        for(int j=0;j<c2;j++){
            int value = 0;
            for(int k=0;k<r2;k++){
                value += A[i][k] * B[k][j];
            }
            C[i][j] = value;
        }
    }
    cout<<endl<<"After multiplication resultant matrix is : "<<endl;
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

   
    
    return 0;
}