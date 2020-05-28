#include<bits/stdc++.h>

using namespace std;

int helper(int n,int *arr){
    
    if(n<=1){
        return n;
    }
    
    if(arr[n]!=-1){
        return arr[n];
    }

    int a = helper(n-1,arr);
    int b = helper(n-2,arr);

    arr[n] = a + b;
    return arr[n];

}

int febo(int n){
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    return helper(n,arr);
}


int main(){
    int n;
    cin>>n;
    cout<<febo(n)<<endl;
    return 0;
}