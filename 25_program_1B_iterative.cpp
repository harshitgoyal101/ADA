#include<iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"enter x:";
	cin>>x;
	cout<<"enter y:";
	cin>>y;
	int ans=1;
	if(x==0)
		ans=0;
	else{
		for(int i=1;i<=y;i++){
			ans*=x;
		}
	}
	cout<<"\nans="<<ans<<endl;
	return 0;
}
