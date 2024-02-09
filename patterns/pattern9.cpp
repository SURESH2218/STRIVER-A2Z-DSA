#include<bits/stdc++.h>
using namespace std;


void pattern9(int num){
    for(int i=1;i<=2*num-1;i++){
        int stars = i;
        if(i>num) stars = 2*num-i;
        for(int j = 1;j<=stars;j++){
            cout<<"x";
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    pattern9(num);
}