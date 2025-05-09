#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int endLine = matrix[0].size() - 1;
        int i=0;
        while (i < matrix.size()){
            if (target == matrix[i][endLine]){
                return true;
            }
            if ( target < matrix[i][endLine]){
                return search(matrix[i], target);
            }
            i++;
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while (low <= high ) {
            mid = ( high + low )/2;
            if ( nums[mid] == target ){
                return true;
            }
            else if ( nums[mid] > target ){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
};
