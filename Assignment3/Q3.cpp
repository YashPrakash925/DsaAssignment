#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
    char arr[n];
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
    void push(char x){
        if(top==n-1){
            cout<<"Overflow\n";
            return;
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Underflow\n";
        }
        else{
            top--;
        }
    }
    void peek(){
        cout<<"Element at top is "<<arr[top]<<endl;
    }
    void print(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
void match(string exp){
    Stack s;
    int size=exp.size();
    for(int i=0;i<size;i++){
        if(exp[i]=='(') s.push(exp[i]);
        else if(exp[i]==')'){
            if(s.isEmpty()){
            cout<<"Unbalanced\n";
            return;
            }
            else s.pop();
        }
    }
    if(s.isEmpty()){
    cout<<"Balanced\n";
    return;
    }
    else cout<<"Unbalanced\n";
}
int main(){
    string exp="(((a+b))+)";
    match(exp);
    return 0;
}
