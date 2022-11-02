class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int a[60] = {0};
        int total = 0;
        for(int i:time){
            i %= 60;
            total += a[(60-i)%60];
            a[i]++;
        }
        return total;
    }
};