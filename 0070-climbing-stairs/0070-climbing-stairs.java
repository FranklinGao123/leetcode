class Solution {
    public int climbStairs(int n) {
        int[] arr = new int[n];
        arr[0] = 1;
        if(n == 1){
            return 1;
        }
        arr[1] = 2;
        for(int i = 2; i < n; i++){
            if(i-1 >= 0){
                arr[i] += arr[i-1];
            }
            if(i-2 >= 0){
                arr[i] += arr[i-2];
            }
        }
        return arr[n-1];
    }
}