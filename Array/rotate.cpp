#include<bits/stdc++.h>
using namespace std;


//over here we just reverse the first k element i.e number of rotation then
//from k +1 to last again we are reverse it then we perform the reverse on whole array
//the result is k rotated array.
// O(n)
 
void rotate(int arr[],int n,int size){
    int i=0;
    int j=n-1;
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
     i = n;
     j = size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
     i=0;
     j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,k,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}