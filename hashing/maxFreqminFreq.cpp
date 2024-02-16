#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    //using map
    map<int,int> mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    int maxFreq = 0;int minFreq = n;
    int maxEle = 0;int minEle = 0;
    

    for(auto it:mp){
        cout<<it.first<<" -> " << it.second<<endl;
       int element = it.first;
       int count = it.second;
        if(count>maxFreq){
            maxEle = element;
            maxFreq  = count;
        }
        if(count<minFreq){
            minEle = element;
            minFreq = count;
        }
    }
    cout<<"Max Freq element is -> "<< maxFreq<<" and the element is -> "<<maxEle<<endl;
    cout<<"Min Freq element is -> "<< minFreq<<" and the element is -> "<<minEle<<endl;

    int q;
    cin>>q;
    while(q!=0){
        q--;
        int number;
        cin>>number;
        cout<<mp[number]<<endl;

    }
}
