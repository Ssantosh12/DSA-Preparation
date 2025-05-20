#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    int arr[n];

    for(i=0;i<=n-1;i++)
        scanf("%d",&arr[i]);

    // first sort the array
    sort(arr,arr+n);

    if(k==0&&arr[0]!=1)  // Edge Case: k can be zero and needs to be handled
        printf("1");
    else if(n==k||(k!=0&&n>k&&arr[k-1]!=arr[k]))
        printf("%d",arr[k-1]);
    else printf("-1");
}
