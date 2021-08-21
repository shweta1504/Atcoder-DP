#include<bits/stdc++.h>
using namespace std;
#define ll 	long long int


int main()
{
	long long int n;
	cin>>n;

	vector<ll> arr(n,0);
	vector<ll> dp(n,0);

	for(int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	dp[0] =0;
	if(n==1) return 0;
	dp[1] = abs(arr[0]-arr[1]);

	for(int i=2;i<=n-1;i++)
	{
		dp[i] = min(dp[i-1] + abs(arr[i] - arr[i-1]), dp[i-2]+abs(arr[i]-arr[i-2]));

	}
    cout<<dp[n-1];
    return 0;
}