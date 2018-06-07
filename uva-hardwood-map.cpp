#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n;
 	cin >> n;
 	
 	string c;
 	getline(cin,c);
 	getline(cin,c);
 	
 	for(int i=0;i<n;i++)
 	{
 		map<string,int> tree;
 		map<string,int>::iterator it;
 		
 		string s;
 		int num=0;
 		getline(cin,s);
 		
 		while(!cin.eof() && s!="\0")
 		{
 			tree[s]++;
 			num++;
 			
 			getline(cin,s);
 		}
 			
 		for(it=tree.begin();it!=tree.end();it++)
 		{
 			double ans=(it->second)*100.00/num;
 			cout << it->first << "\t" << fixed <<setprecision(4)<<ans <<endl;
 		}
 		tree.clear();
 		if(!cin.eof()) cout << endl;
 	}
}
