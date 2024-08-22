class Solution {
public:
    // subproblem definition: total distinct ways to reach from ith stair to target (nth) stair
    int waysFromIthToNth(int stair, int &n){
        // base case: 1. when we are at the target, i.e stair = nth stair
        // 2. when are beyond the target stair, i.e stair > nth stair
        if(stair==n)
            return 1;
        else if(stair>n)
            return 0;
        
        // transition: addition of all choices answers
        return waysFromIthToNth(stair+1,n) + waysFromIthToNth(stair+2,n);
    }
    
    int climbStairs(int n) {
        return waysFromIthToNth(0,n);
    }
};
