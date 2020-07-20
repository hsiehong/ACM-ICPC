#include <iostream>

using namespace std;

int main(int argc , char** argv){
    long long k,x;
    int tcase;
    cin>>tcase;
    while(tcase--){
        cin>>k>>x;
        cout<<9*(k-1)+x<<endl;
    }
    return 0;
}
