#include<iostream>
using namespace std;

int linearSearch(int a[],int size,int i,int item){
	if(a[i]==item) return i;
	if(i==size) return -1;
	linearSearch(a,size,i+1,item);
}

int main(){
	int size;
	cout<<"\nenter the size::";
	cin>>size;
	int a[size];
	cout<<"\nenter the array::\n";
	for(int i=0;i<size;i++){
		cout<<i+1<<"::";
		cin>>a[i];
	}
	int item;
	cout<<"\nelement to be searched::";
	cin>>item;
	int pos=linearSearch(a,size,0,item);
	if(pos==-1)
		cout<<"\n::NoT Found::";
	else
		cout<<"\n::Found at "<<pos+1<<"::\n";
	return 0;
}

