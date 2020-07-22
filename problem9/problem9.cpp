#include <iostream>

using namespace std;

int main(int argc,char** argv){
	const double alpha=19.194;
	double ans;
	int ncase,b;
	cin>>ncase;
	while(ncase--){
		cin>>b;
		ans=alpha*b/2;
		int t=(int)(ans*10);
		if(t%10>0)ans+=1;
		cout<<(int)ans<<endl;
	}
	return 0;
}
