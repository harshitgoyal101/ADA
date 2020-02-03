#include<iostream>

using namespace std;

int binarySearch(int a[],int size,int low,int high,int item){
	if(low>high)	return -1;
	int mid=(low+high)/2;
	if(a[mid]==item)	return mid+1;
	if(a[low]==item)	return low+1;
	if(a[high]==item)	return high+1;
	if(a[mid]>item)	return binarySearch(a,size,low,mid-1,item);
	else return binarySearch(a,size,mid+1,high,item);	
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
	int pos=binarySearch(a,size,0,size,item);
	if(pos==-1)
		cout<<"\n::NoT Found::";
	else
		cout<<"\n::Found at "<<pos<<"::\n";
	return 0;
}
