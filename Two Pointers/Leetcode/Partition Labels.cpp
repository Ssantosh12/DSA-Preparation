class Solution {
public:
    vector<int> partitionLabels(string s) {
        // first we store the last occurence of each character
        int i,left=-1,right;
        
        int lastOccurrence[26];
        
        // we store the last occurrence of each character
        for(i=0;i<=s.size()-1;i++)
            lastOccurrence[s[i]-97]=i;
        
        vector<int> ans;
        
        // whenever index i reaches right pointer we have a partition
        for(i=0;i<=s.size()-1;i++){
            // if left pointer is -1 then left and right pointer needs setting
            if(left==-1){
                left=i;
                right=lastOccurrence[s[i]-97];
            }
            
            // if current char last index is greater than right, we stretch the partition and update right pointer
            if(lastOccurrence[s[i]-97]>right)
                right=lastOccurrence[s[i]-97];
            
            // if index reaches right pointer, we have a partition
            if(i==right){
                ans.push_back(right-left+1);
                left=-1;
            }
        }
        
        return ans;
        
    }
};
