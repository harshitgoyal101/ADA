#include<iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"\nenter x::";
	cin>>x;
	cout<<"\nenter y::";
	cin>>y;
	int ans=0;
	for(int i=1;i<=y;i++){
		ans+=x;
	}cout<<"\nans="<<ans<<endl;
	return 0;
}
