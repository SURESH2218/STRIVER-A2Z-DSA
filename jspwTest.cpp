#include<bits/stdc++/h>
using namespace std;

bool ispalindrome(int i,string &name){
    length = name.size();
    if(i>=length/2) return true;
    if(name[i]!=name[length-1]-i-1) return false;
    return ispalindrome(i+1,name);
}

int main(){hyy
    string name = "madam";
   cout<<ispalindrome(0,name);
}