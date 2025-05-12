#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,m,ops=0;
    scanf("%d%d",&n,&m);

    int arr[n];
    bool presence[m+1],areELePresent=true;
    for(i=1;i<=m;i++)
        presence[i]=false;

    // first we check if 1 to m elements are present in the array or not
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=1&&arr[i]<=m)
            presence[arr[i]]=true;
    }

    // check
    for(i=1;i<=m;i++){
        if(presence[i]==false){
            areELePresent=false;
            break;
        }
    }
    if(areELePresent){
        // now we have to keep removing elements from the end
        // until the frequency of first ele between 1 to m becomes 0
        map<int,int> freq;
        for(i=0;i<=n-1;i++)
            freq[arr[i]]++;

        // now we remove elements one by one
        for(i=n-1;i>=0;i--){
            freq[arr[i]]--;
            ops++;

            // check if we deleted all occurence of this ele
            if(arr[i]>=1&&arr[i]<=m&&freq[arr[i]]==0)
                break;
        }
    }
    printf("%d",ops);
}
