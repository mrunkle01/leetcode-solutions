#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int mid;
        while (low <= high ) {
            mid = ( high + low )/2;
            if ( nums[mid] == target ){
                return mid;
            }
            else if ( nums[mid] > target ){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};
