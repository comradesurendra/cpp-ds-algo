#include<bits/stdc++.h>
using namespace std;

void allset(string str){
    vector<char> vec;
    int count = (1<<str.size());
    for(int i=0;i<count;i++){
        for(int j=0;j<str.size();j++){
            if((i&(1<<j)) > 0){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
}

int main(){
    string str;
    cin>>str;
    allset(str);
    return 0;
}