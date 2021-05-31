#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
	int dem=0;
	if(n<2) return false;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==0) return true;
	else return false;
}

int main()
{
	
	int n;
	cin>>n;
	int a[n+5];
	vector<int> NT;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(check(a[i])) 
		{
			NT.push_back(a[i]);
		}
	}
	cout<< NT.size()<<" ";
	for(int j=0;j<NT.size();j++)
	{
		cout<<NT[j]<<" ";
	}
	
	
	
	
	
	
	return 0;
}
