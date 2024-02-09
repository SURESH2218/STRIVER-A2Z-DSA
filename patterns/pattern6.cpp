#include<bits/stdc++.h>
using namespace std;


void pattern6(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"x";
        }
    cout<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    pattern6(num);
}