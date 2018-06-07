#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	string s,faltu;
	
	cin >> n;
	getline (cin,faltu);
	
	map<string,int> mp;
	
	for(int i=0;i<n;i++)
	{
		getline (cin,s);
		if(mp.count(s)==0)
		{
			cout<<"OK"<<endl;
			mp[s]++;
		}
		else 
		{
			cout<<s<<mp[s]<<endl;
			mp[s]++;
		}
	}
}
