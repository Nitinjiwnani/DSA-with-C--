//WAF to print all prime numbers from 2 to N

#include<iostream>
using namespace std;

int checkPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

void printPrimeNumbers(int n){
    for(int i=2; i<=n; i++){
        if(checkPrime(i)){
            cout<<i<<" "<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printPrimeNumbers(n);
    return 0;
}