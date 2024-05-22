class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // we can minimize pair sums by pairing current max element with current min element
        int left=0,right=nums.size()-1,maxPairSum=0;
        
        sort(nums.begin(),nums.end());
        while(left<right){
            // we pair current max with current min
            if(nums[left]+nums[right]>maxPairSum)
                maxPairSum=nums[left]+nums[right];
            
            left++;
            right--;
            
        }
        return maxPairSum;
    }
};
