#include<bits/stdc++.h>
using namespace std;

bool Checknt(int n)
{
	if(n<2) return false;
	else 
	{
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}

int SoNguoc(int n)
{
	int so=0;
	if(n>9)
	{
		while(n>0)
	    {
		   so=so*10+n%10;
		   n/=10;
	    }
	}
	
	return so;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int max= a<b?b:a;
	int min= a<b?a:b;
	
	for(int i=min;i<=max;i++)
	{
		if(Checknt(i) && (SoNguoc(i)!=i) && Checknt(SoNguoc(i)))
		{
			cout<<i<<" ";
		}
	}
return 0;
}
