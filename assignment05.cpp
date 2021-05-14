include <bits/stdc++.h>
using namespace std;
  
int subCount(int arr[], int n, int k)
{
    int mod[k];
    int Sum = 0;
    for (int i = 0; i < n; i++) 
    {
        Sum += arr[i];
 
         mod[((Sum % k) + k) % k]++;
    }
    int result = 0; 
    for (int i = 0; i < k; i++)
	if (mod[i] > 1)
            result += (mod[i] * (mod[i] - 1)) / 2;
    result += mod[0];
   return result;
}
  
int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	int k;
	cin>>k;
	cout<<subCount(a,n,k);
    	return 0;
}