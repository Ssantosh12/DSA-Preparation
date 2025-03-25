class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // current max cookie tries to satisfy current max greed
        int greedInd,sizeInd,contentCount=0;

        // sort the arrays
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        greedInd=g.size()-1; // placed at current max greed
        sizeInd=s.size()-1;  // placed at current max size

        while(greedInd>=0&&sizeInd>=0){
            // check if current max size cookie satisfy current max
            if(s[sizeInd]>=g[greedInd]){
                contentCount++;
                greedInd--;
                sizeInd--;
            }
            else
                greedInd--;
        }
        return contentCount;
    }
};
