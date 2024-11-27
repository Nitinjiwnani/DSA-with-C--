/*
      1
     121
    12321
   1234321
   Pyramid pattern 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =0; i<n; i++){
        //spaces
        for(int j =0; j<n-i-1; j++){
            cout<<" ";
        }

        //increasing numbers, num1
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }

        //decreasing numbers, num2
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}