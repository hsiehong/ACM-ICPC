#include <bits/stdc++.h>

using namespace std;

int main(void){
    char input[2][3001];
    int dp[2][3001]={};
    int n;
    cin>>n>>input[0]>>input[1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)dp[1][j]=dp[0][j];
        for(int j=0;j<n;j++){
            if(input[0][i]==input[1][j]){
                if(i==0 || j==0)dp[0][j]=1;
                else dp[0][j]=dp[1][j-1]+1;
            }
            else{
                if(i==0 || j==0){
                    if(i==0 && j==0)dp[0][j]=0;
                    else if(i==0)dp[0][j]=dp[0][j-1];
                    else if(j==0)dp[0][j]=dp[1][j];
                }
                else dp[0][j]=max(dp[0][j-1],dp[1][j]);
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
    return 0;
}
