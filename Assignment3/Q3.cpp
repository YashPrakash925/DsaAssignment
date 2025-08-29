#include <bits/stdc++.h>
using namespace std;
void cb(){
    string exp;
    cout<<"Enter expression: ";
    cin>>exp;
    char arr[1000];
    int top=-1, flag=1;
    for(int i=0;i<exp.length();i++){
        char c=exp[i];
        if(c=='('||c=='['||c=='{'){
            arr[++top]=c; 
        }
        else if(c==')'||c==']'||c=='}'){
            if(top==-1){ flag=0; break; }
            char open=arr[top--]; 
            if((open=='('&&c!=')')||(open=='['&&c!=']')||(open=='{'&&c!='}')){
                flag=0; break;
            }
        }
    }
    if(top!=-1) flag=0;
    if(flag==1) cout<<"Balanced";
    else cout<<"Not Balanced";
}
int main(){
    cb();
    return 0;
}