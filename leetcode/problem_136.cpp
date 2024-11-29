//Single number, 4 2 1 2 1, 4 is the single number 
//https://leetcode.com/problems/single-number/description/

#include<iostream>
#include<vector>
using namespace std;

 int singleNumber(vector<int> &nums){
        int ans= 0;
        for(int value: nums){
            ans ^= value;
        }
        return ans; 
    }

int main(){
    vector<int> vec = {4, 1, 2, 1, 2};
    cout << singleNumber(vec);
}