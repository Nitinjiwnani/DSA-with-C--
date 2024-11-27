//find the smallest and largest in an array
#include<iostream>
using namespace std;

int main(){
    int size = 6, arr[size], smallest = INT_MAX, largest = INT_MIN;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The smallest number is: "<<smallest<<endl;
    cout<<"The largest number is: "<<largest<<endl;
}