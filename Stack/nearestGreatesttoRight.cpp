#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    stack<int> stk;
    stk.push(vec[n-1]);
    vector<int> res;
    res.push_back(-1);
    for(int j=n-2;j>=0;j--){
        if(vec[j] > stk.top()){
            
        }
    }
    return 0;
}