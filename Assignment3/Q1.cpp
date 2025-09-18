#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
    int arr[n];
    int top=-1;
public:
    void push(int num){
        if(top==max-1) cout<<"Stack Full";
        else{ 
            top++; arr[top]=num; 
        }
    }
    void pop(){
        if(top==-1) cout<<"Not possible , stack is empty";
        else{ 
            cout<<"The number popped out is"<<arr[top]; top--; 
        }
    }
    int peek(){
        if(top==-1) cout<<"Not possible , stack is empty";
        return arr[top];
    }
    void isEmpty(){
        if(top==-1) cout<<"stack is empty";
        else cout<<"stack is not empty";
    }
    void isFull(){
        if(top==max-1) cout<<"Stack Full";
        else cout<<"stack not Full";
    }
    void display(){
        for(int i=top;i>=0;i++) cout<<arr[i]<<" ";
    }
};
int main(){
    Stack s;
    int choice=0,value;
    while(choice!=7){
        cout<<endl;
        cout<<"MENU"<<endl;
        cout<<"1. Push\n2. Pop\n3. Peek\n4. Check if Empty\n5. Check if Full\n6. Display\n7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: cout<<"Enter a number\n"; cin>>value; s.push(value); break;
            case 2: s.pop(); break;
            case 3: s.peek(); break;
            case 4: s.isEmpty(); break;
            case 5: s.isFull(); break;
            case 6: s.display(); break;
            case 7: break;
            default: cout<<"Invalid choice! Try again.\n";
        }
    }
    cout<<"Exiting program.\n";
    return 0;

}


