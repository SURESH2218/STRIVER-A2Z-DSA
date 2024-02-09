#include<bits/stdc++.h>
using namespace std;


void pattern10(int num){
    int start =1 ;
    for(int i=1;i<=num;i++){
        if(i%2==0) start = 0;
        else start = 1;
        for(int j=1;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    pattern10(num);
}