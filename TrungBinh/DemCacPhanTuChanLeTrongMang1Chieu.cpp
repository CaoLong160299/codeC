#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	int chan[n+5];
	int le[n+5];
	int count1=0;
	int count2=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			chan[count1++]=a[i];
		}
		else 
		{
			le[count2++]=a[i];
		}
	}
	cout<<count1<<" ";
	for(int i=0;i<count1;i++)
	{
		cout<<chan[i]<<" ";
	}
	cout<<endl;
	
	cout<<count2<<" ";
	for(int i=0;i<count2;i++)
	{
		cout<<le[i]<<" ";
	}
return 0;
}
