/*
AAAA
 BBB
  CC
   D
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    char ch = 'A';
    for(int i=0;i<n;i++){
        ch = ch + i;
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}