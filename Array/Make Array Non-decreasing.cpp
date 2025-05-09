class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        // using previous element as deciding factor
        //TODO: clear explanation needed
        int i,n=nums.size(),previousEle=nums[0],maxSizeArray=1;

        for(i=1;i<=n-1;i++){
            if(nums[i]>=previousEle){
                maxSizeArray++;
                previousEle=nums[i];
            }
        }
        return maxSizeArray;
    }
};
