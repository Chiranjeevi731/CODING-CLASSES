#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int i,flag=0,num;
		cin>>num;
		int a[num];
		int prefix[num];
		int rprefix[num];
		for(int i=0;i<num;i++)
		cin>>a[i];
		prefix[0]=a[0];
		for(int i=1;i<num;i++)
		prefix[i]=prefix[i-1]+a[i];
		
		int left=0,right=0;		
		int index_a;
		if (num==1)
		cout<<"0";
		else
		{
		
		
		
		for(i=1;i<num-2;i++)
		{
left=prefix[i-1];
right=prefix[num-1]-prefix[i];
		    if (left==right)
		    {
		        flag=1;
		        index_a=i;
break;
		    }
		}
		
		if (flag==1)
		cout<<index_a;
		else
		cout<<"-1";
		}
}