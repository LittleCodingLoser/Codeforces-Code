#include<iostream>
#include<algorithm>
#define ull unsigned long long
using namespace std;
int dp[10005],arr[105],n,x,ans=-1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<=x;i++) dp[i]=-1;
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=x;j>=arr[i];j--)
        {
            if(dp[j-arr[i]]>=0) dp[j]=max(dp[j],dp[j-arr[i]]+1);
        }
    }
    for(int i=0;i<=x;i++) ans=max(ans,dp[i]);
    cout<<ans;
    return 0;
}
