class Solution {
public:
    int longestBalanced(string s) {
        // brute force to use O(n^2) to iterate over each subarray starting ith
        int i,j,k,n=s.size(),longestSub=0,prvFreq;

        // create a 26 size array to store the frequency of chars in each subarray
        vector<int> freq(26);

        for(i=0;i<=n-1;i++){

            // first make freq array elements zero
            for(j=0;j<=26-1;j++)
                freq[j]=0;

            // now iterate over each subrray starting from ith index
            for(j=i;j<=n-1;j++){
                // update freq of current char
                freq[s[j]-97]++;

                // check if subrray from ith to jth has all chars frequency equal
                bool areFreqEqual=true;
                prvFreq=-1;
                for(k=0;k<=26-1;k++){
                    if(freq[k]>0){
                        if(prvFreq==-1)
                            prvFreq=freq[k];
                        else if(freq[k]!=prvFreq){
                            areFreqEqual=false;
                            break;
                        }
                    }
                }
                if(areFreqEqual)
                    longestSub=max(longestSub,j-i+1);
            }
        }
        return longestSub;
    }
};
