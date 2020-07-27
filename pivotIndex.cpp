// Find Pivot Index: https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int dp[n + 1];
        for (int i = 0; i < n + 1; i++) dp[i] = 0;
        
        for (int i = 1; i < n + 1; i++)
            dp[i] = dp[i - 1] + nums[i - 1];
        
        for (int i = 1; i < n + 1; i++){
            if (dp[i - 1] == dp[n] - dp[i])
                return i - 1;
        }
        
        return -1;
    }
};
