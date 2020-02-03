#include<iostream>
using namespace std;
int heapSize;

void heapify(int array[],int i,int n){
	int l= 2*i+1;
	int r=l+1;
	int max=i;
	if(l<=n &&array[max]<array[l])	max=l;
	if(r<=n &&array[max]<array[r])	max=r;
	if(max!=i){
		int t=array[max];
		array[max]=array[i];
		array[i]=t;
		heapify(array,max,n);
	}
}

void buildHeap(int array[]){
	for(int i=(heapSize/2)-1;i>=0;i--){
		heapify(array,i,heapSize-1);
	}
}

void heapSort(int array[]){
	buildHeap(array);
	int n=heapSize-1;
	while(n>=1){
		int t=array[0];
		array[0]=array[n];
		array[n]=t;
		n--;
		heapify(array,0,n);
	}
}

int main(){
	cout<<"enter the size::";
	cin>>heapSize;
	int array[heapSize];
	cout<<"enter the array::\n";
	for(int i=0;i<heapSize;i++){
		cout<<i+1<<" :: ";
		cin>>array[i];
	}
	heapSort(array);
	
	cout<<"\nSorted array::\n";
	for(int i=0;i<heapSize;i++){
		cout<<i+1<<" :: "<<array[i]<<endl;
	}
	return 0;
}

