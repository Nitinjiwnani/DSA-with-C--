//linear search

#include<iostream>
#include<vector>
using namespace std;

void linearSearch(int sz, int target, vector<int> &nums){
   for(int i=0; i<sz; i++){
    if(nums[i]==target){
        cout<<i<<endl;
        cout<<nums[i]<<endl;
    }
   }
}

int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    int target = 1;
    linearSearch(nums.size(), target, nums);
}