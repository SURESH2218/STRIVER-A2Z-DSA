#include<bits/stdc++.h>
using namespace std;

int fact(int number){
    if(number == 1) return 1;
    
    return number*fact(number-1);
    // cout<<number;
}

int main(){
    int Number;
    cin>>Number;
    cout<<fact(Number);
    // cout<<Number;
}