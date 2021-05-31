#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int hang,cot;
	int a[100][100];

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int maxh=0;
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=a[i][j];
		}
		if(sum>maxh)
		{
			maxh=sum;
			hang=i;
		}
	}
	for(int i=hang;i<m-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=a[i+1][j];
		}
	}
	m--;
	int maxc=0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=a[j][i];
		}
		if(sum>maxc)
		{
			maxc=sum;
			cot=i;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=cot;j<n;j++)
		{
			a[i][j]=a[i][j+1];
		}
	}
	n--;
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
