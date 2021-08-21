#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define inf 1e18
int main()
{
	ll n, k;
	cin>>n>>k;
	vector<ll> arr(n,0);

	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	vector<ll> dp(n,1e18);
	dp[0] = 0;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=k;j++)
		{
            if(i-j < 0)
            {
            	break;
            }
            dp[i] = min(dp[i],dp[i-j]+ abs(arr[i]-arr[i-j]));
		}
	}
 cout<<dp[n-1];
 return 0;
}