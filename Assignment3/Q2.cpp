#include <bits/stdc++.h>
using namespace std;
class Stack{
    static const int MAX=1000;
    char arr[MAX];
    int top;
public:
    Stack(){ top=-1; }
    void push(char c){
        if(top<MAX-1) arr[++top]=c;
    }
    char pop(){
        if(top==-1) return '\0';
        return arr[top--];
    }
    bool isEmpty(){ return top==-1; }
};

int main(){
    string s,r=""; 
    cout<<"Enter a string: ";
    cin>>s;
    Stack st;
    for(char c:s) st.push(c);
    while(!st.isEmpty()) r+=st.pop();
    cout<<"Reversed:"<<r;
    return 0;
}