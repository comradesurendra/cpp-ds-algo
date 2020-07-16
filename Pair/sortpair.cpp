#include<bits/stdc++.h>
using namespace std;


void pairSort(int arr[],char chr[],int size){
    pair<int,char> pr[size];
    for(int i=0;i<size;i++){
        pr[i].first = arr[i];
        pr[i].second =chr[i];
    }
    sort(pr,pr+size);

    for(int i=0;i<size;i++){
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }
}

int main(){
   int n;
   cin>>n;
   int arr[n];
   char chr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       cin>>chr[i];
   }

   pairSort(arr,chr,n);
    return 0;
}