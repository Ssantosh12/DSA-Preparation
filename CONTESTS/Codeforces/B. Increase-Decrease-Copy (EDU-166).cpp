#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,i,lastEle,minOps=0,closestGap=10000000000,gap;
        scanf("%lld",&n);
        long long int a[n],b[n+1];
        for(i=0;i<=n-1;i++)
            scanf("%lld",&a[i]);

        for(i=0;i<=n;i++)
            scanf("%lld",&b[i]);

        // there are two cases possible here: NOTE : we can only append only 1 time+
        // case 1:
        lastEle=b[n];

        // for each transition , compare that with the last element and find the closest gap

        for(i=0;i<=n-1;i++){
            // here a[i] will increase to reach b[i]
            if(a[i]<b[i]){
                if(lastEle>=a[i]&&lastEle<=b[i])
                    gap=0;
                else if(lastEle<a[i]){
                    gap=llabs(a[i]-lastEle);
                }
                else{
                    gap=llabs(b[i]-lastEle);
                }
                if(gap<closestGap)
                    closestGap=gap;
            }
        // here a[i] will decrease to reach b[i]
            else{
                if(lastEle>=b[i]&&lastEle<=a[i])
                    gap=0;
                else if(lastEle<b[i]){
                    gap=llabs(b[i]-lastEle);
                }
                else{
                    gap=llabs(a[i]-lastEle);
                }
                if(gap<closestGap)
                    closestGap=gap;
            }
            minOps+=llabs(a[i]-b[i]);
        }
        minOps+=closestGap+1;
        cout<<minOps<<endl;
    }
}
