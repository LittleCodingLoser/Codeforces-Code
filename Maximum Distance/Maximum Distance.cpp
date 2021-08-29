#include<iostream>
#include<algorithm>
#define ull unsigned long long
using namespace std;
int ans=-1,n,x[5000],y[5000];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans=max(ans,(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
        }
    }
    cout<<ans;
    return 0;
}
