#include<bits/stdc++.h>

using namespace std;

void newproArray(vector<int> v){
    vector<int> a;
    int mul=1;
    for(auto i:v){
        mul*=i;
    }
    for(auto j:v){
        int k=mul/j;
        a.push_back(k);
    }

    for(auto k:a){
        cout<<k<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while (n!=0)
    {
        int c;
        cin>>c;
        v.push_back(c);
        n--;
    }
    newproArray(v);

    return 0;
}