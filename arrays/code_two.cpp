//find the index of the smallest and largest value in an array

#include<iostream>
using namespace std;

int main(){
   int size = 6, arr[size], smallest = INT_MAX, largest = INT_MIN, smallestIndex, largestIndex;
    for(int i=0;i<size;i++){
         cin>>arr[i];
    }
    for(int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
        if(arr[i]>largest){
            largest = arr[i];
            largestIndex = i;
        }
    }
    cout<<"The smallest number is: "<<smallest<<" at index "<<smallestIndex<<endl;
    cout<<"The largest number is: "<<largest<<" at index "<<largestIndex<<endl;
    return 0;
}