#include<bits/stdc++.h>

using namespace std;

int last(vector<int> v,int k){
    int st=0;
    int lt=v.size()-1;
    int lastoc=0;
    while(st<=lt){
        int mid = st + (lt-st)/2;
        if(v[mid] == k){
            lastoc=mid;
        }
        if(v[mid]<k){
          lt=mid-1;  
        }
        if(v[mid]>k){
            st=mid+1;
        }
    }
    return lastoc;
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    return 0;
}