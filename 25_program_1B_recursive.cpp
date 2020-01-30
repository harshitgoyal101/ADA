#include<iostream>
using namespace std;

int pow(int x,int y){
	if(y==0||x==1)	return 1;
	if(x==0)	return 0;
	return x*pow(x,y-1);
}

int main(){
	int x,y;
	cout<<"enter x:";
	cin>>x;
	cout<<"enter y:";
	cin>>y;
	int ans=pow(x,y);
	cout<<"\nans="<<ans<<endl;
	return 0;
}
