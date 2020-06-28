#include<bits/stdc++.h>

using namespace std;

bool check(int n){
    if(n==0)
        return false;
    while(n>0){
        if(n&1==0)
            return false;
        n=n>>1;
        }
    return true;
}

int main(){
    int n;
    cin>>n;
    check(n);
    return 0;
}