#include<iostream>
using namespace std;

int mul(int x,int y){
	if(x==1)	return y;
	if(y==1)	return x;
	if(x==0||y==0)	return 0;
	return x+mul(x,y-1);
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
