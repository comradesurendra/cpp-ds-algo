#include<bits/stdc++.h>

using namespace std;

int missing(vector<int> v){
    int min=INT_MAX;
    for(int j=0;j<v.size();j++){
        if((v[j]<min) && !(v[j]<0)){
            min = v[j];
        }
    }
    return min-1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v.push_back(c);

    }
    cout<<missing(v)<<endl;
    return 0;
}