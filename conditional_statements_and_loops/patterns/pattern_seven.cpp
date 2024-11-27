/*
1
21
321
4321
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int y = i+1;
//         for(int j=0; j<i+1; j++){
//             cout<<y<<" ";
//             y--;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}