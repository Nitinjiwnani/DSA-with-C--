//Calculate the sum of numbers from 1 to N
#include<iostream>
using namespace std;


int sumOfNumbers(int n){
    int sum  = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sumOfNumbers(n)<<endl;
    return 0;
}