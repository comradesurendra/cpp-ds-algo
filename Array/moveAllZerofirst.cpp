#include<bits/stdc++.h>
using namespace std;


// O(n) time and O(1) space
void move(int arr[],int size){
    int cloud=0;
    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            swap(arr[i],arr[cloud]);
            cloud++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// O(n) time and O(n) space
void push(int arr[],int size){
    int res[size];
    int indexCount = 0;
    if(size == 0 ){
        return;
    }
    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            res[indexCount] = 0;
            indexCount++;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i] != 0){
            res[indexCount] = arr[i];
            indexCount++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<res[i]<<" ";
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