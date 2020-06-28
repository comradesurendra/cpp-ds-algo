#include<bits/stdc++.h>

using namespace std;

void part(int arr[],int size,int pivote){
    int st=0;
    int en=size-1;
    int i=0;
    while(st<en){
        if(arr[i]< pivote){
            swap(arr[i],arr[st]);
            st++;
            i++;
        }
        if(arr[i] > pivote){
            swap(arr[i],arr[en]);
            i++;
            en--;
        }
        if(arr[i] == pivote){
            i++;
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
    part(arr,n,4);
    return 0;
}