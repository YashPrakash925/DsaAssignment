#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
    int arr[n];
    int top=-1;
public:
    int isFull(){
        if(top==n-1) return 1;
        else return 0;
    }
    int isEmpty(){
        if(top==-1) return 1;
        else return 0;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Overflow\n";
            return;
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"Underflow\n";
        }
        else{
            return arr[top--];
        }
    }
    void peek(){
        cout<<arr[top]<<endl;
    }
    void print(){
        for(int i=top;i>=0;i--){
            cout<<arr[i];
        }
        cout<<endl;
    }
};
int isOperand(char c){
    if(c=='*'||c=='/'||c=='+'||c=='-'||c=='('||c==')') return 0;
    else return 1;
}
void eval(char postfix[]){
    Stack s;
    int size=strlen(postfix);
    for(int i=0;i<size;i++){
        if(postfix[i]==' ') {
            continue;
        }
        if(isOperand(postfix[i])){
            s.push(postfix[i]-'0');
        }
        else if(!isOperand(postfix[i])){
            char op=postfix[i];
            int x1=s.pop();
            int x2=s.pop();
            switch(op){
                case '+':
                    s.push(x2+x1);
                    break;
                case '-':
                    s.push(x2-x1);
                    break;
                case '*':
                    s.push(x2*x1);
                    break;
                case '/':
                    s.push(x2/x1);
                    break;
            }
        }
    }
    s.peek();
}
int main(){
    char postfix[]={"1 2 + 3 *"};
    eval(postfix);
    return 0;
}
