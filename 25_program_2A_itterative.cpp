#include<iostream>
using namespace std;

int linearSearch(int a[],int item,int n,int i){
	if(i==n) return -1;
	if(a[i]==item) return i+1;
	return linearSearch(a,item,n,i+1);
}

int main(){
	int n;
	int item,i;
	cout<<"enter the size::";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cout<<"\n"<<i+1<<"::";
		cin>>a[i];
	}
	cout<<"\nenter the item::";
	cin>>item;
	int pos=linearSearch(a,item,n,0);
	if(pos==-1)	cout<<"not found";
	else	cout<<"found at "<<pos;
	return 0;
}
