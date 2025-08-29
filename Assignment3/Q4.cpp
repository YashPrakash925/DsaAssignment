#include <bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^') return 3;
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return -1;
}
void itp(){
    string exp;
    cout<<"Enter ecpression: ";
    cin>>exp;
    char st[1000]; int top=-1;
    string res="";
    for(int i=0;i<exp.length();i++){
        char c=exp[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')) res+=c;
        else if(c=='(') st[++top]=c;
        else if(c==')'){
            while(top!=-1&&st[top]!='(') res+=st[top--];
            if(top!=-1&&st[top]=='(') top--;
        }
        else{
            while(top!=-1&&prec(st[top])>=prec(c)) res+=st[top--];
            st[++top]=c;
        }
    }
    while(top!=-1) res+=st[top--];
    cout<<res;
}
int main(){
    itp();
    return 0;
}