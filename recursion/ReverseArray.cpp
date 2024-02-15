#include<bits/stdc++.h>
using namespace std;

int revFun(int i,int n,int arr[]){
    if(i>=n/2) return 0;
    swap(arr[i],arr[n-i-1]);
    return revFun(i+1,n,arr);
}

int main(){
    int number;
    cin>>number;
    int arr[number];
    for(int i = 0;i<number;i++) cin>>arr[i];
    revFun(0,number,arr);
    for(int i = 0;i<number;i++) cout<<arr[i]<<" ";
}