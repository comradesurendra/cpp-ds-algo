#include<bits/stdc++.h>

using namespace std;

void move(int arr[],int size){
    int cloud=size-1;
    for(int i=size-1;i>=0;i--){
        if(arr[i] == 0){
            swap(arr[i],arr[cloud]);
            cloud--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move(arr,n);
    return 0;
}