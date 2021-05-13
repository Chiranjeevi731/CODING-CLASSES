// Sub array sum equals to c

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n=7,c=0;
	int a[n]={4,-2,-1,1,-2,3,-3};
	map<int,int>m;
	int count=0;
	m.insert({0,1});
	int prefix=0;
	for(auto i:a)
	{
	    prefix+=i;

	    if(m.find(prefix-c)!=m.end())
	    {
	        count+=m[prefix-c];
	    }
	    m[prefix]+=1;
	}
	cout<<count;
	return 0;
}
