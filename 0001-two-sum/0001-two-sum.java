class Solution{
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> arr = new HashMap<Integer, Integer>();
        for(int i = 0; i<nums.length; i++){
            if(arr.containsKey(target-nums[i])){
                return new int[]{arr.get(target-nums[i]),i};
            }
            arr.put(nums[i],i);
        }
        return null;
    }
}