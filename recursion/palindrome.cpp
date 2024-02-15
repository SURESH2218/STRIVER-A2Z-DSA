#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int i,string &name){
    if(i>=name.size()/2) return true;
    if(name[i]!=name[name.size()-i-1]) return false;
    return ispalindrome(i+1,name);
}

int main(){
    string name = "madam";
    cout<<ispalindrome(0,name);
}