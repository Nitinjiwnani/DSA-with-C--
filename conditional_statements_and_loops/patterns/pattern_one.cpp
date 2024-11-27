/*
1 2 3
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 1;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            
            cout<<sum<<" ";  
            sum += 1;              
            }
            cout<<endl;
        }
     return 0;
    }
    
   
