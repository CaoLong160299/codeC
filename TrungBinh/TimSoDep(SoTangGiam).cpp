#include<bits/stdc++.h>
using namespace std;

bool checktang(int n)
{
	int tmp=n;
	int store[10];
	int count=0;
	while(tmp>0)
	{
		store[count++]=tmp%10;
		tmp/=10;
	}
	for(int i=0;i<count-1;i++)
	{
		if(store[i]<=store[i+1])
		{
			return false;
		}
	}
	return true;
}
bool checkgiam(int n)
{
	int tmp=n;
	int store[10];
	int count=0;
	while(tmp>0)
	{
		store[count++]=tmp%10;
		tmp/=10;
	}
	for(int i=0;i<count-1;i++)
	{
		if(store[i]>=store[i+1])
		{
			return false;
		}
	}
	return true;
}
bool checknt(int n)
{
	int dem=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0) dem++;
	}
	if(dem==0) return true;
	else return false;
}


int main()
{
	int n;
	cin>>n;
	int dem=0;
	for(int i=pow(10,n-1);i<pow(10,n);i++)
	{
		if((checktang(i)||checkgiam(i)) && checknt(i))
		dem++;
	}
	cout<<dem;
	
	
	return 0;
}
