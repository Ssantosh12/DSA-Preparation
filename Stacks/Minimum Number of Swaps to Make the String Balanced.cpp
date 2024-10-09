class Solution {
public:
    int minSwaps(string s) {
        int i,n=s.size(),swap=0;
        stack<char> stk;
        
        // TODO: the understanding of this problem of why this works
        // for any closing bracket we encounter without any opening bracket left
        // we will swap this closing with any opening bracket , and this opening bracket also goes in stack
        for(i=0;i<=n-1;i++){
            if(s[i]=='[')
                stk.push('[');
            else{
                if(!stk.empty())
                    stk.pop();
                else{
                    swap++;
                    stk.push('[');
                }
            }
        }
        return swap;
        
    }
};
