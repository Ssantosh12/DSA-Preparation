class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // sort the array and change each element to the middle element (median) of the sorted array
        int median,i,ops=0,n=nums.size();
        sort(nums.begin(),nums.end());
        
        median=nums[n/2];  // when there are two medians, any of them can be chosen
        for(i=0;i<=n-1;i++){
            ops+=abs(median-nums[i]);
        }
        
        return ops;
    }
};
