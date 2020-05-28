#include<bits/stdc++.h>
using namespace std;

int knapsack(int weight[],int val[], int W, int size){   
    int dp[size+1][W+1];
    for(int i=0;i<size+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0){
            dp[i][j] =  0;
            }
        }
    }
    
    for(int i=1;i<size+1;i++){
        for(int j=1;j<size;j++){
            if(weight[i-1]<=j){
        return dp[i][j] = max(val[i-1] + dp[i-1][j-weight[i-1]],dp[i-1][j]);
    }
    else if(weight[i-1] > j){
        return dp[i][j] = dp[i-1][j];
    }
  }
}
    return dp[size][W];
}

int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int size,W;
        int val[size];
        int weight[size];
        for(int j=0;j<size;j++){
            cin>>val[j];
        }
        for(int j=0;j<size;j++){
            cin>>weight[j];
        }
        //int dp[size+1][W+1];
        cout<<knapsack(weight,val,W,size)<<endl;
    }

    return 0;
}