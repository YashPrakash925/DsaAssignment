#include <bits/stdc++.h>
using namespace std;
int eval(string exp){
    int st[1000],top=-1;
    for(int i=0;i<exp.length();i++){
        char c=exp[i];
        if(c>='0'&&c<='9') st[++top]=c-'0';
        else{
            int v2=st[top--],v1=st[top--];
            if(c=='+') st[++top]=v1+v2;
            else if(c=='-') st[++top]=v1-v2;
            else if(c=='*') st[++top]=v1*v2;
            else if(c=='/') st[++top]=v1/v2;
            else if(c=='^') st[++top]=pow(v1,v2);
        }
    }
    return st[top];
}
int main(){
    string exp;
    cout<<"Enter expression: ";
    cin>>exp;
    cout<<eval(exp);
    return 0;
}