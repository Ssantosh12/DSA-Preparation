// User function Template for Java

class Solution {
    public int longestSubarray(int[] arr, int k) {
        // we use map to store the first index of each prefix subarray sub
        int i,n=arr.length,longestSubLen=0,currentPrefixSum=0;
        
        Map<Integer, Integer> prefixSumFirstInd = new HashMap<>();
        
        // store each prefix subarray sum first occurence index
        for(i=0;i<=n-1;i++){
            currentPrefixSum+=arr[i];
            
            // store the prefix subarray sum index only if it is the first occurence
            if(prefixSumFirstInd.get(currentPrefixSum)==null)
                prefixSumFirstInd.put(currentPrefixSum,i);
            
            // check if current prefix subarray sum is already equal to k
            if(currentPrefixSum==k)
                longestSubLen=Math.max(longestSubLen,i+1);
            
            // check for any prefix with sum currPreSum-k
            if(prefixSumFirstInd.get(currentPrefixSum-k)!=null){
                longestSubLen=Math.max(longestSubLen,i-prefixSumFirstInd.get(currentPrefixSum-k));
            }
        }
        return longestSubLen;
    }
}
