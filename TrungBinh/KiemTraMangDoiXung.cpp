#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bool check=true;
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i-1])
		{
			check=false;
		}
	}
	if(check) cout<<"1";
	else cout<<"0";
	
	
	
	return 0;
}
