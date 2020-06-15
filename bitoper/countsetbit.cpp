#include<bits/stdc++.h>
using namespace std;

int countset(int n){ //simple way but takes 0(numbers of bits).
    int res=0;
    while(n>0){
        if(n&1==1){
            res++;
        }
        n>>1;
    }
    return res;
}


int count(int n){   //Brian alog it takes o(numbers of set bit).
    int res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}