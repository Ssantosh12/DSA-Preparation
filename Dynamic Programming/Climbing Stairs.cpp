class Solution {
public:
    // subproblem definition: total distinct ways to reach from ith stair to target (nth) stair
    int waysFromIthToNth(int stair, int &n, vector<int> &dp){
        // base case: 1. when we are at the target, i.e stair = nth stair
        // 2. when are beyond the target stair, i.e stair > nth stair
        if(stair==n){
            if(dp[stair]==-1)
                dp[stair]=1;
            return dp[stair];
        }
        else if(stair>n){
            if(dp[stair]==-1)
                dp[stair]=0;
            return dp[stair];
        }
        
        // transition : additon of all choices answers
        if(dp[stair]==-1)
            dp[stair] = waysFromIthToNth(stair+1,n,dp) + waysFromIthToNth(stair+2,n,dp);
        return dp[stair];
    }
    
    int climbStairs(int n) {
        // using memoization
        vector<int> dp(n+2,-1);
        waysFromIthToNth(0,n,dp);
        return dp[0]; // return waysFromIthToNth(0,n,dp) is also correct
    }
};
