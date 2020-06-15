#include<bits/stdc++.h>
using namespace std;

int find(vector<int> v){
    int a=1;
    for(int i=0;i<v.size()-1;i++){
        a^=v[i];
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<find(v)<<endl;
    return 0;
}