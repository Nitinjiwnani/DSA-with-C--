//WAF to calculate sum and product of an array

#include<iostream>
using namespace std;

int sumOfArray(int sz, int arr[]){
    int sum = 0;
    for(int i=0; i<sz; i++){
        sum+=arr[i];
    }
    return sum;
}

int productOfArray(int sz, int arr[]){
    int product = 1;
    for(int i=0; i<sz; i++){
        product*=arr[i];
    }
    return product;
}

int main(){
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    cout<<sumOfArray(size, arr)<<endl;
    cout<<productOfArray(size, arr)<<endl;
    return 0;
}