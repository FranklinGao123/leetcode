class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int[] arr = new int[cost.length];
        arr[0] = cost[0];
        arr[1] = cost[1];
        for(int i = 2; i<cost.length; i++){
            arr[i] = Math.min(arr[i - 1] + cost[i], arr[i-2] + cost[i]);
        }
        return Math.min(arr[cost.length - 1], arr[cost.length-2]);
    }
}