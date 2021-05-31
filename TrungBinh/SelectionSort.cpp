#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		//tim phan tu nho nhat tu i+1->n
		int vtmin=i+1; 
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[vtmin])
			{
				vtmin=j;
			}
		}
		if(a[i]>a[vtmin]) //Neu a[i] hien tai lon hon thi moi swap , tranh TH bang nhau thi khong swap
		{
			swap(a[i],a[vtmin]);
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
