#include <bits/stdc++.h>

using namespace std;

int main()
{
	pair<string,int>p("tatti",180);
	unordered_map<string,int> myMap(97);
	myMap["mango"] = 120;
	myMap["apple"] = 130;
	myMap["pear"] = 140;
	myMap["ritik"] = 150;
	myMap.insert(p);
	myMap["poop"] = 130;


	for(auto node: myMap){
		cout<<myMap.bucket(node.first)<<" : ";
		cout<<node.first<<"-"<<node.second<<endl;
	}
}
