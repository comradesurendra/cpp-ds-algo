#include<bits/stdc++.h>

using namespace std;

int binary(vector<int> v,int k){
    sort(v.begin(),v.end());
    int st=0;
    int en=v.size()-1;
    for(auto j : v){
        cout<<j<<" ";
    }
    cout<<endl;
    //cout<<en<<endl;
    while(st<=en){
        int mid = st + (en-st)/2;
        if(v[mid] == k){
            return mid;
        }
        if(k<v[mid]){
            en=mid -1;
        }
        if(k>v[mid]){
            st=mid+1;
        }
    }
    return -1;
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

    cout<<binary(v,k)<<endl;
    return 0;
}