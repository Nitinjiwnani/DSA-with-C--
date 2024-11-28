//write a function to print all the unique values in an array

#include<iostream>
using namespace std;

void uniqueValue(int sz, int arr[]){
    for(int i = 0; i < sz; i++) {
        bool isUnique = true;
        for(int j = 0; j < sz; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
            }
        }
        if(isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    int size = 6, arr[] = {1, 2, 3, 4, 1, 2};
    uniqueValue(size, arr);
}