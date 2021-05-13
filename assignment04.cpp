// Unsorted Sub array

#include<iostream>
using namespace std;
int main()
{

int num,len=0,maxlen=0;
cin>>num;
int arr1[num];
int arr2[num];
for(int i=0;i<num;i++)
  cin>>arr1[i];
for(int i=0;i<num;i++)
  cin>>arr2[i];
for(int i=0;i<num;i++)
 {
 	int add1=0,add2=0;
 	for(int j=i;j<num;j++)
 	{
 		add1+=arr1[j];
 		add2+=arr2[j];
 		if(add1==add2)
 		{
 			len=j-i+1;
		 }
		 if(len>maxlen)
		   maxlen=len;

	 }
 }   
	 cout<<maxlen; 
}