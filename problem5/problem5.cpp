#include <iostream>

using namespace std;

void sol(){
    int arr[10];
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<9;++i)arr[i]=0;
        if(n==1)cout<<"1"<<endl;
        else{
            for(int i=9;i>=2;i--){
                while(n%i==0){
                    arr[i]++;
                    n/=i;
                }
            }
            if(n>1)cout<<"-1"<<endl;
            else
                for(int i=2;i<=9;i++)
                    while(arr[i]-->0)cout<<i;
            cout<<endl;
        }
    }
}

int main(void){
    sol();
    return 0;
}
