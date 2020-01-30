#include<iostream>
using namespace std;

int pow(int x,int y){
	if(y==0||x==1)	return 1;
	if(x==0)	return 0;
	int temp=pow(x,y/2);
	temp = temp*temp;
	if(y%2==0)	return temp;
	return temp*x;
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
