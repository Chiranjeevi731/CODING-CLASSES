#include <iostream>

using namespace std;

int main()
{
    
    int n;
	cin>>n;
	while(n--)
	{
		 int p;
		cin>>p;
		long long int arr[p];
		for( long int i=0;i<p;i++)
		cin>>arr[i];
		long long int c[n+1];
		c[0]=0;
		
		for( int i=1;i<=p;i++)
		c[i]=c[i-1]+c[i-1];
		long int r;
		cin>>r;
		while(r--)
		{
			 int l,y;
			cin>>l>>y;
			cout<<arr[y]-arr[l-1]<<endl;
		}
	}
    return 0;
}
