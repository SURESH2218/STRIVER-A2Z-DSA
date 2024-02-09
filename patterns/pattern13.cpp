#include<bits/stdc++.h>
using namespace std;

void pattern13(int num){
    int value = 1;
    for(int i = 1;i<=num;i++){
        for(int j = 1;j<=i;j++){
            cout<<value;    
            value+=1;
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin>> num;
    pattern13(num);
}