class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        // we use each group size as a key to hashmap/map whole will be a vector/array
        // we keep filling a particular size vector upto its size, and when filled
        // we remove it and append the array in ans array of arrays
        int i,n=groupSizes.size();
        vector<vector<int>> ans;

        map<int,vector<int>> groupMap;

        for(i=0;i<=n-1;i++){
            // for each groupsize in array use it as a key in groupMap
            groupMap[groupSizes[i]].push_back(i);

            // check if the array is fully filled
            if(groupMap[groupSizes[i]].size()==groupSizes[i]){
                ans.push_back(groupMap[groupSizes[i]]);

                //empty this key size array
                groupMap[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};
