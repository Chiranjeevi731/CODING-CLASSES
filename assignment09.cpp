#include<iostream>
using namespace std;
long long int NUM=1000001;
long long int seive[1000001];
void gen_seive(){
	for (int i=0;i<NUM;i++)
		seive[i]=1;
		seive[0]=seive[1]=0;
		for(int i=2;i*i<NUM;i++){
			if(seive[i]==1){
				for(int j=i*i;j<=NUM;j+=i)
					seive[j]=0;
			}
		}
	}
int main(){
gen_seive();
int k;
cin>>k;
int count=0;
for(int i=2;i<=k;i++){
	if(seive[i]==1)	
		count++;
}
cout<<count<<" ";
return 0;
}
