#include<bits/stdc++.h>

using namespace std;

void check(int n,int k){
     if(n&(1<<(k-1)))
        cout<<"True";
    else
        cout<<"False";
}


int main(){
    int n,k;
    cin>>n>>k;
    check(n,k);
    return 0;
}