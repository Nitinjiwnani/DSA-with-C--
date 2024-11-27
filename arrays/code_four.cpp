//reverse array

#include<iostream>
using namespace std;

void reverseArray(int sz, int arr[]){
    int start = 0, end = sz-1; 
    while(start<end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size= 6; 
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverseArray(size, arr);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}