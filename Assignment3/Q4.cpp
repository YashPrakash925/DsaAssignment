#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack {
    char arr[n];
    int top=-1;
public:
    int isFull(){
        return top==n-1;
    }
    int isEmpty(){
        return top==-1;
    }
    void push(char x){
        if(isFull()) cout<<"Overflow\n";
        else arr[++top]=x;
    }
    char pop(){
        if(isEmpty()){
            cout<<"Underflow\n";
            return '\0';
        }
        return arr[top--];
    }
    char peek(){
        if(isEmpty()) return '\0';
        return arr[top];
    }
};
int pre(char c){
    if(c=='*'||c=='/') return 2;
    else if(c=='+'||c=='-') return 1;
    else return 0;
}
int isOperand(char c){
    if(c=='*'||c=='/'||c=='+'||c=='-'||c=='('||c==')') return 0;
    else return 1;
}
void convert(string infix){
    Stack s;
    char postfix[100];
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(infix[i]==' '){i++; continue;}
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }
        else if(infix[i]=='('){
            s.push(infix[i++]);
        }
        else if(infix[i]==')'){
            while(!s.isEmpty()&&s.peek()!='('){
                postfix[j++]=s.pop();
            }
            s.pop();
            i++;
        }
        else{
            while(!s.isEmpty()&&pre(infix[i])<=pre(s.peek())){
                postfix[j++]=s.pop();
            }
            s.push(infix[i++]);
        }
    }
    while(!s.isEmpty()){
        postfix[j++]=s.pop();
    }
    postfix[j]='\0';
    cout<<postfix<<endl;
}
int main(){
    string infix="a+b*c";
    convert(infix);
    return 0;
}
