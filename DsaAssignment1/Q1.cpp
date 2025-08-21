#include <bits/stdc++.h>
using namespace std;
void menu(){
    int n;
    while(n!=6){
    cout<<endl<<"--MENU--"<<endl;
    cout<<"1.CREATE"<<endl;
    cout<<"2.DISPLAY"<<endl;
    cout<<"3.INSERT"<<endl;
    cout<<"4.DELETE"<<endl;
    cout<<"5.LINEAR SEARCH"<<endl;
    cout<<"6.EXIT"<<endl;
    cout<<"Enter your choice->"<<endl;
    cin>>n;
    switch(n){
        case 1:
            int size;
            cout<<"Enter size : ";
            cin>>size;
            int arr[100];
            for(int i=0;i<size;i++){
                cout<<"Enter element "<<i+1<<" : ";
                cin>>arr[i];
            }
            break;
        case 2:
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            break;
        case 3:
            int x,pos;
            cout<<"Enter element and position(index) : "<<endl;
            cin>>x>>pos;
            size+=1;
            for(int i=size-1;i>=0;i--){
                if(i>pos){
                    swap(arr[i],arr[i-1]);
                }
            }
            arr[pos]=x;
            break;
        case 4:
            int p;
            cout<<"Enter position(index) of element to be deleted : ";
            cin>>p;
            for(int i=0;i<size;i++){
                if(i>p){
                    swap(arr[i],arr[i-1]);
                }
            }
            size--;
            break;
        case 5:
            int search;
            cout<<"Enter element to be searched : ";
            cin>>search;
            for(int i=0;i<size;i++){
                if(arr[i]==search){
                    cout<<"Element found at index "<<i<<endl;
                }
            }
            break;
    }
    }
}
int main(){
    menu();
    return 0;
}