class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        for(int i = 1; i<nums.size(); i++){
            //cout << nums[ans] << " " << nums[i] << endl;
            if(nums[ans] != nums[i]){
                ++ans;
                nums[ans] = nums[i];
            }
        }
        return ans+1;
    }
};