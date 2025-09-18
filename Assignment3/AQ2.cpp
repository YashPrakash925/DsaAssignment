#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
    int arr[n];
    int top=-1;
public:
    int m=INT_MAX;
    void push(int num){
        if(top==n-1) cout<<"Stack Full";
        else{ 
            top++;
            arr[top]=num;
            if(num<m) m=num; 
        }
    }
    void pop(){
        if(top==-1) cout<<"Not possible , stack is empty";
        else{ 
            arr[top];
            top--; 
        }
    }
    int peek(){
        if(top==-1) cout<<"Not possible , stack is empty";
        return arr[top];
    }
    int isEmpty(){
        if(top==-1) return 1;
        else return 0;
    }
    int isFull(){
        if(top==n-1) return 1;
        else return 0;
    }
    void display(){
        for(int i=top;i>=0;i++) cout<<arr[i]<<" ";
    }
    void getmin(){
    cout<<m;
}
};
int main(){
    Stack s;
    s.push(18);
    s.push(15);
    s.push(19);
    s.getmin();
    return 0;
}
