#include<iostream>
using namespace std;

int linearSearch(int a[],int size,int item){
	for(int i=0;i<size;i++){
		if(a[i]==item) return i+1;
	}
	return -1;
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
	int pos=linearSearch(a,size,item);
	if(pos==-1)
		cout<<"\n::NoT Found::";
	else
		cout<<"\n::Found at "<<pos<<"::\n";
	return 0;
}

