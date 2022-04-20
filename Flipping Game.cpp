#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b=0,c=-1,d=0;
	cin>>a;
	for(int e=0;e<a;e++)
	{
		int tem;
		cin>>tem;
		if(tem)
		{
			b++;
			d--;
			c=max(c,d);
			if(d<0)
			{
				d=0;
			}
		}
		else
		{
			d++;
			c=max(d,c);
		}
	}
	cout<<b+c;
	return 0;
}
