//WAF to check if a number is prime or not

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

int main(){
    if(checkPrime(4)){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The number is not prime"<<endl;
    }
    return 0;
}