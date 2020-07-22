#include <iostream>

using namespace std;

int main(int argc,char** argv){
	int chairCnt=0,coming=0,maxChair=0;
	cin>>chairCnt;
	cin>>coming;
	int *chairNow=new int[chairCnt];
	for(int i=0;i<chairCnt;++i){
		cin>>chairNow[i];
		if(chairNow[i]>maxChair)
			maxChair=chairNow[i];
	}
	int lessSum=0;
	for(int i=0;i<chairCnt;++i){
		lessSum+=(maxChair-chairNow[i]);
	}
	int ans=0;
	if(coming<=lessSum){
		ans=maxChair;
	}
	else{
		int overflow=(coming-lessSum);
		if(overflow%chairCnt==0)ans=maxChair+overflow/chairCnt;
		else ans=maxChair+overflow/chairCnt+1;
	}
	cout<<ans<<endl;
	delete[] chairNow;
	return 0;
}
