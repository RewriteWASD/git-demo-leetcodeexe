#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int> nums(10,5);
class Solution {
public:
    
    int findRepeatNumber(vector<int>& nums) {
        int i=0;
        while ( i<nums.size()){
            if(nums[i]==i){
                i++;
                continue;
            }
            if(nums[i]==nums[nums[i]]){
                return nums[i];
            }
            swap(nums[i],nums[nums[i]]);
        }
        return -1;
    }
};
int main(){
    Solution so;
    int x=so.findRepeatNumber(nums);
    cout << x;
    system("pause");
    return 0;
}