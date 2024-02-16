#include <bits/stdc++.h>
using namespace std;

// int hashh[100000] = {};
int main(){
    int number;
    cin>>number;
    int arr[number];
    for(int i = 0 ;i<number;i++){
        cin>>arr[i];
    }

// using map function

    map<int,int> mp;

    // int hashh[13] = {0};
    for(int i = 0 ; i < number; i++){
        mp[arr[i]] += 1;
    }

    for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }

    int noOfQueries;
    cin>>noOfQueries;
    while(noOfQueries--){
        int num;
        cin>>num;
        cout<<mp[num] << endl;
    }
    return 0;
}
