
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

    int ele,i,n,m,indA=0,indB=0,times;
    cin>>n>>m;

    int a[n],b[m];
    for(i=0;i<=n-1;i++){
        cin>>ele;
        a[i]=ele;
    }
    for(i=0;i<=m-1;i++){
        cin>>ele;
        b[i]=ele;
    }

    // the two pointers indA and indB points to the current smallest element of array A and B respetively
    // we just compare and print the SMALLER between the current smalles elements of array A and B
    times=n+m;
    while(times--){
        if(indA<=n-1&&indB<=m-1){
            // when both indices/pointers are in range of array then only we can compare
            if(a[indA]<b[indB]){
                cout<<a[indA]<<" ";
                indA++;
            }
            else {
                cout<<b[indB]<<" ";
                indB++;
            }
        }
        else if(indA>n-1){
            cout<<b[indB]<<" ";
            indB++;
        }
        else{
            cout<<a[indA]<<" ";
            indA++;
        }
    }
}
