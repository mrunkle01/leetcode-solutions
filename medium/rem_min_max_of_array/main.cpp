//Description
/*
You are given a 0-indexed array of distinct integers nums.

There is an element in nums that has the lowest value and an element that has the highest value. We call them the minimum and maximum respectively. Your goal is to remove both these elements from the array.

A deletion is defined as either removing an element from the front of the array or removing an element from the back of the array.

Return the minimum number of deletions it would take to remove both the minimum and maximum element from the array.
*/
#include <cstdlib>
#include <vector>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if ( nums.size() == 1){
            return 1;
        }
        int minIdx = -1; int minNum = INT_MAX;
        int maxIdx = -1; int maxNum = INT_MIN;

        for(int i = 0; i < nums.size();i++){
            if( nums[i] > maxNum ){
                maxNum = nums[i];
                maxIdx = i;
            }
            if ( nums[i] < minNum ){
                minNum = nums[i];
                minIdx = i;
            }
        }
        int ans; int s = nums.size();
        int front = max(minIdx,maxIdx) + 1;
        int back = s - min(minIdx, maxIdx);
        int both = (min(minIdx, maxIdx) + 1) + (s - max(minIdx, maxIdx));

        return min(min(front,back), both);
    }
};