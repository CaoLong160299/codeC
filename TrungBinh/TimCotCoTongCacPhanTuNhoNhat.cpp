//Duc Ha Minh
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5][n+5];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int cot;
	int min=0;
	for(int i=1;i<=n;i++)
	{
		min+=a[i][1];
	}
	cot=1;
	for(int j=2;j<=n;j++)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=a[i][j];
		}
		if(sum<min)
		{
			min=sum;
			cot=j;
		}
	}
	cout<<cot<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i][cot]<<" ";
	}
	
	return 0;
}
