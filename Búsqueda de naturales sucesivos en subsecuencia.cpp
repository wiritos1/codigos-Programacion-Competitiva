#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr;
	ll flag=-1;
	for(ll i=0;i<n;i++)
	{
		cin>>arr;
		if(arr==flag+1)
		{
			flag++;
		}
	}
	cout<<flag;
	return 0;
}
