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
            cout<<arr[i];
        }
        cout<<endl;
    }
};
void ros(){
    Stack s;
    string exp;
    cout<<"Enter string :";
    cin>>exp;
    for(int i=0;i<exp.size();i++){
        s.push(exp[i]);
    }
    s.print();
}
int main(){
    ros();
    return 0;
}
