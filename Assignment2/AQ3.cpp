#include<bits/stdc++.h>
using namespace std;
void sortString(string &s){
    int n=s.length();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j]>s[j+1]){
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
void anagram(){
    string str1,str2;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    if(str1.length()!=str2.length()){
        cout<<"Not Anagram\n";
        return;
    }
    sortString(str1);
    sortString(str2);
    if(str1==str2) cout<<"Anagram\n";
    else cout<<"Not Anagram\n";
}
int main(){
    anagram();
    return 0;
}