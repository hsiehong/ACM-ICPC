#include <iostream>
#include "lib0020.h"

using namespace std;

long long height_limit(long long M){
    long long left=1,right=M+1,mid;
    while(left<right){
        mid=(left+right)/2;
        if(is_broken(mid))right=mid;
        else left=mid+1;
    }
    return left-1;
}
