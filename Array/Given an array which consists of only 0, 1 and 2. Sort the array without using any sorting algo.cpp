#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int c0=0,c1=0,c2=0;
	for(int i=0;i<n;++i){
		if(a[i]==0){
			c0++;
		}
		else if(a[i]==1){
			c1++;
		}
		else{
			c2++;
		}
	}
	for(i=0;i<c0;++i){
		a[i]=0;
	}
	for(i=c0;i<c0+c1;++i){
		a[i]=1;
	}
	while(c2--){
		a[i++]=2;
	}
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
		
	}
	return 0;
}

/* 
7
0 0 2 1 2 0 2
0 0 0 1 2 2 2*/
