#include<bits/stdc++.h>
using namespace std;


//SubArray Sliding Window
void subArraySum(int arr[],int size,int target){
    int sum=arr[0];
    int st=0;
    int ed=0;
    for(st<){
        if(sum == target){
            cout<<st<<" "<<ed<<endl;
            break;
        }
        else if(sum < target){
            if(ed == size-1){
                break;
            }
            ed++;
            sum +=arr[st];
            
        }
        else{
            sum-=arr[st];
            st++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    return 0;
}