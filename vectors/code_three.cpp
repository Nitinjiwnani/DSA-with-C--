#include<iostream>
#include<vector>
using namespace std;

void reverseVector(int sz, vector<int> &nums){
    int start = 0, end = sz-1;
    while(start<end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> nums = {2,3,1,5};
    cout<<"Before value"<<endl;
    for(int value: nums){
        cout<<value<<" ";
    }
    cout<<endl;
    reverseVector(nums.size(), nums);
    cout<<"After value"<<endl;
      for(int value: nums){
        cout<<value<<" ";
    }
}