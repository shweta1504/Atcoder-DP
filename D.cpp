#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll n,w;
  cin>>n>>w;
  vector<ll> val(n,0);
  vector<ll> wt(n,0);
  vector<ll> dp1(w+1,0);
  vector<ll> dp2(w+1,0);

  for(int i=0;i<=n-1;i++)
  {
  	cin>>wt[i]>>val[i];
  }

  for(int i=0;i<=n-1;i++)
  {
  	for(int j=1;j<=w;j++)
  	{
  		if(wt[i]>j)
  		{
  			dp2[j] = dp1[j];
  		}
  		else
  		{
  			dp2[j] = max({dp2[j],dp1[j], val[i]+dp1[j-wt[i]]});
  		}

  	}
  	dp2.swap(dp1);
  	dp2.clear();

  }
  cout<<dp1[w];
  return 0;
}