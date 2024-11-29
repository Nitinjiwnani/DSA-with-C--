#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    vec.pop_back();
    for(char value: vec){
        cout << value << " ";
    }
}