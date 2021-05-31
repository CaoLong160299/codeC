#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	int d[10000]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		d[a[i]]++;
    }
    int dem=0;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
    	if(d[a[i]]==1)
    	{
    		dem++;
    		arr.push_back(a[i]);
		}
	}
	cout<<dem<<endl;
	for(int i=0;i<arr.size();i++)
    {
       cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
