#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<min<<" "<<max;
}
