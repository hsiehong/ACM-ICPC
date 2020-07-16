#include <iostream>

using namespace std;

int main(int argc,char** argv){
    //cin.tie(0);
    //ios::sync_with_stdio(false);
    int n,m,a,b;
    cin>>n>>m;
    int *arr=new int[n];
    int *xorr=new int[n+1];
    xorr[0]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        xorr[i+1]=xorr[i]^arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        int t=xorr[b]^xorr[a-1];
        cout<<t<<endl;
    }
    return 0;
}
