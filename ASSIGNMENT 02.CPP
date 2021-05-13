// criminals found PROGRAM
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n];
      int x=0, c=0, sum=0;
      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
          if(arr[i]!=-1)
          {
              sum+=arr[i];
              c++;

          }
          else if(arr[i]==-1)
          {
              x=sum/c;
              arr[i]=x;
              sum+=x;
              c++;
          }

      }
      for(int i=1;i<=n;i++)
           cout<<arr[i]<<" ";
  }

    return 0;
}