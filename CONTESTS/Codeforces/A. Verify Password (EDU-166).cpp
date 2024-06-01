#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,maxDigit=48,maxChar=97,charInd;
        scanf("%d",&n);
        bool charFound=false;
        string s,ans="YES";
        cin>>s;
        // use ascii

        for(i=0;i<=s.size()-1;i++){
            if(s[i]>=97){
                charFound=true;
                if(s[i]<maxChar){
                    ans="NO";
                    break;
                }
                maxChar=s[i];
            }
            else{
                if(charFound||s[i]<maxDigit){
                    ans="NO";
                    break;
                }
                maxDigit=s[i];
            }
        }
        cout<<ans<<endl;
    }
}
