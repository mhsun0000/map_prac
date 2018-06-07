#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	map<int,int> arr;
	for(int i=1;i<=n;i++)
	{
		int t;
		cin>>t;
		arr[t]=1;
	}
	
	int s=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]!=1) s++;
	}

	cout << s << endl;
}
