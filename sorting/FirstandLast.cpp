#include<bits/stdc++.h>
using namespace std;

void FirstLast(int arr[],int n){
    for(int i = (n/2)-1;i>=0;i--){
        int didSwap = 0;
        for(int j = 0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap++;
            }
        }
        if(didSwap==0){
            break;
        }
        cout<<"runs\n";
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    FirstLast(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}