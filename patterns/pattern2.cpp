#include<bits/stdc++.h>
using namespace std;


void pattern2(int num){
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    pattern2(num);
}