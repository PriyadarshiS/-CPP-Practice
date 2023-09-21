#include<iostream>
#include<limits.h>

using namespace std;
// int largestElementIndex(int arr[],int size){
//     int max = arr[0];
//     int maxindex=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }
int second_largest(int arr[],int size){
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>second_max &&arr[i]!=max){
            second_max=arr[i];
        }
    }
    return second_max;
}
int main(){
    int arr[7];
    cout<<"Enter array elements: ";
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
//     int index_of_largest=largestElementIndex(arr,7);
//    // arr[index_of_largest]=-1;
//    int largetsElement=arr[index_of_largest];
//    for(int i=0;i<7;i++){
//     if(arr[i]==largetsElement){
//         arr[i]=-1;
//     }
//    }
//     int index_second_largest=largestElementIndex(arr,7);
//     cout<<"second largest element is : "<<arr[index_second_largest]<<endl;
cout<<"Second largest element is: "<<second_largest(arr,7)<<endl;
    return 0;
}