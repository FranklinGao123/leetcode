class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int mid = nums.size()/2;
        if(target > nums[nums.size()-1]){
            return nums.size();
        }
        if(target < nums[0]){
            return 0;
        }
        while(nums[mid] != target){
            cout<< nums[low] << " " << nums[mid] << " " << nums[high]<<endl;
            if(high - low <= 1){
                break;
            }
            if(nums[mid] < target){
                low = mid;
                mid = (high - low)/2 + low;
            }else{
                high = mid;
                mid = (high - low)/2 + low;
            }
        }
        if(nums[mid] == target){
            return mid;
        }
        if(nums[low] == target){
            return low;
        }
        return high;
    }
};