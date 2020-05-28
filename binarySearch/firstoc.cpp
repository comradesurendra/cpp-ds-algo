#include<bits/stdc++.h>

using namespace std;

int firstOccur(vector<int>v,int k){
    int st = 0;
    int end = v.size()-1;
    sort(v.begin(),v.end());
    int pos=0;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(v[mid] == k){ 
            pos =  mid;
        }
        if(v[mid]<k){
            end = mid -1;
        }
        if(v[mid]>k){
            st = mid+1;
        }
    }
    return pos;
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
    cout<<firstOccur(v,k)<<endl;
    return 0;
}