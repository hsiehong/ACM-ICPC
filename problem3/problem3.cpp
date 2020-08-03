#include <iostream>
#define S 1001
#define mod 1000000009

using namespace std;

int dp[S][S];
void sol(void){
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF){
        dp[0][0]=dp[1][1]=dp[2][1]=1;
        for(int i=2;i<=n;++i){
            for(int j=2;j<=k && j<=i;++j){
                dp[i][j]=(dp[i-1][j-1]+dp[i-2][j-1])%mod;
            }
        }
        int sum=0;
        for(int i=0;i<=k;i++){
            sum=(sum+dp[n][i])%mod;
        }
        printf("%d\n",sum);
    }
}

int main(void){
    sol();
    return 0;
}
