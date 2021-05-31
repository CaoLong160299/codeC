#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	if(n<2)
		return false;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}



int main()
{
	int n;
	cin>>n;
	int a[n+5];
	int ok[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ok[a[i]]=0;
	}
	sort(a,a+n);
	
	vector<int> arr;
	int d[100000]={0};

	for(int i=0;i<n;i++)
	{
		if(check(a[i]) && (ok[a[i]]==0))
		{
			ok[a[i]]=1;
			arr.push_back(a[i]);
			d[a[i]]++;
		}
		
		else if(check(a[i]) && (ok[a[i]]==1))
		{
			d[a[i]]++;
		}
	}
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" "<<d[arr[i]];
		cout<<endl;
	}
	
	
	
	return 0;
}
