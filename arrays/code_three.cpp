#include<iostream>
using namespace std;

int linearSearch(int sz, int target, int arr[]){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size = 6, target = 44;
    int arr[] = {22, 23, 1, 44, 65, 12};
    cout<<linearSearch(size, target, arr)<<endl;
    return 0;
}