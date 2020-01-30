#include<iostream>
using namespace std;

int mul(int x,int y){
	if(x==1)	return 1;
	if(y==1)	return x;
	if(x==0||y==0)	return 0;
	int temp=2*mul(x,y/2);
	if(y%2==0) return temp;
	return temp+x;
}

int main(){
	int x,y;
	cout<<"enter x:";
	cin>>x;
	cout<<"enter y:";
	cin>>y;
	int ans=mul(x,y);
	cout<<"\nans="<<ans<<endl;
	return 0;
}
