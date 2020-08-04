#include <iostream>

using namespace std;

void sol(void){
    int n,k;
    int cnt[26]={0};
    string input;
    scanf("%d %d",&n,&k);
    cin>>input;
    int len=input.length();
    for(int i=0;i<len;++i)
        cnt[input[i]-'A']++;
    int mymin=n;
    for(int i=0;i<k;++i)
        if(cnt[i]<mymin)mymin=cnt[i];
    printf("%d\n",mymin*k);
}

int main(void){
    sol();
    return 0;
}
