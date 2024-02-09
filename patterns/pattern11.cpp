#include<bits/stdc++.h>
using namespace std;


void pattern10(int num){
    int spaces = 2*(num-1);
    for(int i=1;i<=num;i++){
        
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //spaces
        for(int i=1;i<spaces;i++){
            cout<<" ";
        }

        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        spaces-=2;
    }
}

int main(){
    int num;
    cin>>num;
    pattern10(num);
}