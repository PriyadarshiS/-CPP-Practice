 #include<iostream>
 using namespace std;
 int main(){
    cout<<"helloPW"<<endl<<"er model";
    int x = 5;
    cout << "The value of x is: " << (x > 3 ? "greater" : "smaller")<<endl;
   //   float num;
   //  cin >> num;
   //  cout << "The number entered is: " << num;
     int num1 = 5;
    int num2 = 3;
    int num3 = 2;
    num1 = num2++;
    num2 = --num3;
    cout << num1 << " " << num2 << " " << num3;
    return 0;
 }
