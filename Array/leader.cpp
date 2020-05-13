#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int size){
    stack<int> s;
    int curr = 0;

    //over here we are iterating from the end of an array since the last always remain leader.
    //and when ever we found the previous element greater then curr we store it in curr.
    //our new leader is the element greater then curr.
    //O(n)

    for(int i=size-1;i>=0;i--){
        if(arr[i]>curr){ 
            curr = arr[i];
            s.push(curr);
        }
    }
    while(!s.empty()){
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