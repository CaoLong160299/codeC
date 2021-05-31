#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
	int tmp=n;
	int x=0;
	while(tmp>0)
	{
		x=(tmp%10)+x*10;
		tmp/=10;
	}
	if(x==n) return true;
	return false;
}

int main()
{
	int n;
	cin>>n;
	int a[n+5];
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(check(a[i]) && a[i]>9)
		{
			arr.push_back(a[i]);
		}
	}
	cout<<arr.size()<<" ";
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
	return 0;
}
