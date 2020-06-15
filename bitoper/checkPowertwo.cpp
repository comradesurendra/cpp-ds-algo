#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n&&!(n&(n-1))){      //we perform and operation between two numbers Ex 5 and 4
        return true;        //5 - 101 and 4 - 100 on and operation we get 000
    }                       //that proves that on performing and operation if we get zero i.e not 
    return false;           //power of zero else we get one. for number 0 we have to take care
}                           //apart from this logic.

int main(){
    int n;
    cin>>n;
    cout<<check(n)<<endl;
    return 0;
}