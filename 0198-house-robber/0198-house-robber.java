class Solution {
    public int rob(int[] nums) {
        int[] arr = new int[nums.length];
        arr[0] = nums[0];
        if(nums.length == 1) return nums[0];
        else if(nums.length == 2) return Math.max(nums[0],nums[1]);
        arr[1] = nums[1];
        arr[2] = nums[2]+arr[0];
        for(int i = 3; i<nums.length; i++){
            arr[i] = nums[i] + Math.max(arr[i-2], arr[i-3]);
        }
        return Math.max(arr[nums.length-1], arr[nums.length-2]);
    }
}