#include <bits/stdc++.h>
#define N 9.59717124788752402

using namespace std;

int main(int argc,char** argv){
	int ncase,b;
	scanf("%d",&ncase);
	while(ncase--){
		scanf("%d",&b);
		printf("%d\n",(int)ceil(N*(double)b));
	}
	return 0;
}
