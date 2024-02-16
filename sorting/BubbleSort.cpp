#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i = n-1;i>=0;i--){
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

void InsertionSort(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            cout<<"runs\n";
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // BubbleSort(arr,n);
    InsertionSort(arr,n);
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//time complexity O(N^2) = worst complexity === bubble sort
//2 3 5 15 20  ====>>>> best case  ==> O(N)

// selectionSort === if it is sorted o(n) is best time complexity if the array is sorted