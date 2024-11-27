//nth fabonacci series

#include<iostream>
using namespace std;

int fabonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fabonacci(n-1) + fabonacci(n-2);
}

void printFabonacci(int n){
    for(int i=0; i<n; i++){
        cout<<fabonacci(i)<<" "<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printFabonacci(n);
    return 0;
}

/*
iterative approach 
#include<iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        cout << next << " " << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}
*/