#include<map>
#include<iostream>
#include<iterator>

using namespace std;

int main ()

{
	map < int ,int > map1,map2;

	map2[6]=201;
	map2[2]=101;
	map2[3]=201;
	map2[4]=401;
	map2[6]=501;
	map2[5]=601;
	map2[1]=201;

	map1.insert (pair< int ,int >( 6,20));
	map1.insert (pair< int ,int >( 1,40));
	map1.insert (pair< int ,int >( 2,30));
	map1.insert (pair< int ,int >( 3,60));
	map1.insert (pair< int ,int >( 4,20));
	map1.insert (pair< int ,int >( 5,50));
	map1.insert (pair< int ,int >( 6,10));
	
//	cout << map1.size() << endl;
		
	map < int ,int > :: iterator itr;
	
	cout << "\tKey\tElement\n";
	
	for( itr=map1.begin() ; itr!=map1.end() ; itr++)
		cout << "\t" << itr-> first << "\t" << itr->second <<endl;
	cout << endl;
	
	cout << "\tKey\tElement\n";
	for( itr=map2.begin() ; itr!=map2.end() ; itr++)
		cout << "\t" << itr-> first << "\t" << itr->second <<endl;
	cout << endl;
/*	
	map1.begin()->first.swap(map2.begin()->first);
	map1.begin()->second.swap(map2.begin()->second);
	
	for( itr=map1.begin() ; itr!=map1.end() ; itr++)
		cout << "\t" << itr-> first << "\t" << itr->second <<endl;
	cout << endl;
	
	cout << "\tKey\tElement\n";
	for( itr=map2.begin() ; itr!=map2.end() ; itr++)
		cout << "\t" << itr-> first << "\t" << itr->second <<endl;
	cout << endl;
*/
	
	cout << map2[1]++ << endl;
	cout << map2[1] << endl;
	
}
