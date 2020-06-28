#include<bits/stdc++.h>
using namespace std;


// Kadane Algorithm
void maxSumSubarray(int arr[],int size){
    int result = arr[0];
    int maxEnding = arr[0];
    for(int i=1;i<size;i++){
        maxEnding = max(arr[i],maxEnding+arr[i]);
        result = max(result,maxEnding);
    }
    cout<<result<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxSumSubarray(arr,n);
    return 0;
}