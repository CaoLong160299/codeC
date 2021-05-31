#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin.ignore();
	getline(cin,s);
	int dem=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ') dem++;
	}
	cout<<dem+1;
	
	
	return 0;
}
