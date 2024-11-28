// WAF to Swap the largest and smallest elements in an array

#include<iostream>
using namespace std;

int smallestIndex(int sz, int arr[]){
    int smallest = INT_MAX, smallestIndex;
    for(int i = 0; i<sz; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    return smallestIndex;
}

int largestIndex(int sz, int arr[]){
    int largest = INT_MIN, largestIndex;
    for(int i = 0; i<sz; i++){
        if(arr[i]>largest){
            largest = arr[i];
            largestIndex = i;
        }
    }
    return largestIndex;
}

void swapMaxAndMin(int sz, int arr[]){
    int smallest  = smallestIndex(sz, arr);
    int largest   = largestIndex(sz, arr);
    swap(arr[smallest], arr[largest]);
}

int main(){
    int size = 5, arr[] = {3,7,5,4,21};
    swapMaxAndMin(size, arr);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}