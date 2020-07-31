#include <bits/stdc++.h>

using namespace std;

int main(void){
	int ncase,k;
	long long n;
	cin>>ncase;
	while(--ncase>=0){
		cin>>n>>k;
		if(n<k){
			cout<<"NO"<<endl;
			continue;
		}
		else if(n%2 && k%2==0){ //n is odd and k is even =>impossible
			cout<<"NO"<<endl;
			continue;
		}
		else if(n%2==0 && k%2){ //n is even and k is odd
			if(n<k*2){
				cout<<"NO"<<endl;
				continue;
			}
			cout<<"YES"<<endl;
			for(int i=0;i<k-1;i++){
				cout<<"2 ";
				n-=2;
			}
			cout<<n<<endl;
		}
		else{
			cout<<"YES\n";
			for(int i=0;i<k-1;++i){
				cout<<"1 ";
				n-=1;
			}
			cout<<n<<endl;
		}
	}
	return 0;
}
