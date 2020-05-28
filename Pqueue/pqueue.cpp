#include<bits/stdc++.h>

using namespace std;

class Queue{

    vector<int> v;

    public:
        Queue(){
        }

    bool isEmpty(){
        return v.size() == 0;
    }

    int getSize(){
        return v.size();
    }

    int getMin(){
        if(isEmpty()){
            return -1;
        }
        return v[0];
    }

    void insert(int k){
        v.push_back(k);
        int cindex = v.size()-1;

        //swap(v[cindex],v[pindex]);

        while(cindex>0){
        int pindex = (cindex - 1)/2;
       
        if(v[cindex]<v[pindex]){
            swap(v[cindex],v[pindex]);
            }
        else{
            break;
           }

            cindex = pindex;
        }
    }

};




int main(){


    return 0;
}