#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int size){
    stack<int> s;
    int curr = 0;
    for(int i=size-1;i>=0;i--){
        if(arr[i]>curr){
            curr = arr[i];
            s.push(curr);
        }
    }
    while(s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leader(arr,n);
    return 0;
}