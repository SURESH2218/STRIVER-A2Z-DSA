#include<bits/stdc++.h>
using namespace std;


void pattern5(int num){
    for(int i=num;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    pattern5(num);
}