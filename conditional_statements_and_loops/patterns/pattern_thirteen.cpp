/*
     *
    * *
   *   *
  *     * 
   *   *
    * *
     *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of stars for pyramid pattern: ";
    cin>>n;
    //Top half of the pattern
    for(int i =0 ; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

        //spaces
        if(i!=0){
             for(int j=0; j<(2*i)-1; j++){
            cout<<" ";
        }
        cout<<"*";
        }
       cout<<endl;
    }

    //Bottom half of the pattern
    for(int i=0; i<n-1;i++){
        //spaces
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";
        //spaces
        if(i!= (n-2)){
             for(int j=0; j<(2*(n-i)-5); j++){
            cout<<" ";
        }
        cout<<"*";
        }
       cout<<endl;
    }
    return 0;
}