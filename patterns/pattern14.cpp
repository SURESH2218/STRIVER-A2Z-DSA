#include<bits/stdc++.h>
using namespace std;

void pattern14(int num){
    for(int i = 0;i<num;i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int num){
    for(int i=num;i>0;i--){
        for(char ch = 'A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int num){
    char ch = 'A';
    for(int i=1;i<=num;i++){
        for(int j = 1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch+=1;
    }
}

void pattern17(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        char  ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
    cout<<endl;
    }
}

void pattern18(int num)
{
    for(int i= 0 ;i<num;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout<<ch<<"-";
        }
        cout<<endl;
    }
}

void pattern19(int num){
    int spaces=0;
    for(int i=0;i<num;i++){
        for(int j=num;j>i;j--){
            cout<<"x";
        }
        for(int j=0;j<spaces;j++){
            cout<<"-";
        }
        for(int j=num;j>i;j--){
            cout<<"x";
        }

        spaces+=2;
        cout<<endl;
    }

    spaces = 2*num-2;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<"x";
        }
        for(int j=1;j<=spaces;j++){
            cout<<"-";
        }
        for(int j=1;j<=i;j++){
            cout<<"x";
        }
    
        spaces-=2;
        cout<<endl;
    }
}


int main(){
    int num;
    cin>> num;
    pattern19(num);
}