
#include <bits/stdc++.h>
using namespace std;

void init_code(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

int main() {
    init_code();

    int i,n,m,indA=0;
    cin>>n>>m;

    int a[n],b[m];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=m-1;i++)
        cin>>b[i];

    // now we are going to use an array to store the smaller elements for array 'b'
    int smaller[m];
    smaller[0]=0;

    // for each element of array 'b' we store the no. of elements smaller than it in 'smaller' array
    for(i=0;i<=m-1;i++){
        if(i!=0)
            smaller[i]=smaller[i-1];

        // if current element of array A is smaller then b[i] then we move indA right and smaller++
        while(indA<=n-1&&a[indA]<b[i]){
            smaller[i]+=1;
            indA++;
        }
    }

    for(i=0;i<=m-1;i++)
        cout<<smaller[i]<<" ";
}
