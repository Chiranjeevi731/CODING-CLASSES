#include<iostream>
using namespace std;
/*int main()
{
	int n,i,j,r=0;
	cin>>n;
	bool x[n]={true};
	i=2;
	while(i*i<n)
	{
		for(j=2;j*i<n;j++)
		x[j*i]=false;
		i++;
		while(x[i]==false && i*i<n)
		i++;
	}
	for(i=2;i<n;i++)
	{
		if(x[i]==true)
		r++;
	}
	cout<<r;
  return 0;
}
*/
/*int primecount(int n)
{
	int c=0;
	for(int loopi=2;loopi<n;loopi++)
	{
		if(isprime(loopi)
		   c++;
	}
	return c;
}
bool isprime(int n)
{
	int n1=int(sqrt(n));
	for(int loopj=2;loopj<=n;loopj++)
	{
		if(n%loopj==0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	cout<<primecount(n);
}
*/
 
long long int x=1000000;
long long int s[1000000];
void genseiver()
{
	for(int i=0;i<x;i++)  //s[]={1,1,1,1,...1000000 times}
	s[i]=1;
	s[0]=s[1]=0;		//s[]={0,0,1,1,1....}
	for(int i=2;i*i<x;i++)
	{
		if(s[i]==1)				//i=2 then s[]={0,0,1,1,0,1,0,1,0,1,0,1,0,...}
		{					//i=3 then s[]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,...}
			for(int j=i*i;j<=x;j=j+i)
				s[j]=0;
		}
	}
}
int primecount(int num)
{
	int count=0,loopi;
	for(loopi=2;loopi<=n;loopi++)
	{
		if(s[loopi]==1)
		count++;
	}
	return count;
}

int main()
{
	genseiver();		//call to genseiver() function
	int number;
	cin>>number;
	cout<<primecount(numnber);
	return 0;
}