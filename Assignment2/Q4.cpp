#include<bits/stdc++.h>
using namespace std;
void parta(){
    string s1,s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    int n1=s1.size(),n2=s2.size();
    for(int j=0;j<n2;j++){
        s1+=s2[j];
    }
    cout<<"Concatenated string-> "<<s1<<endl;
}
void partb(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int n=s.size();
    for(int i=0,j=n-1;i<(n/2);i++,j--){
        swap(s[i],s[j]);
    }
    cout<<"Reversed string-> "<<s<<endl;
}
void partc(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    string ns="";
    for(int i=0;i<s.size();i++){
        if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
             s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
            ns+=s[i];
        }
    }
    cout<<"String after removing vowels-> "<<ns<<endl;
}
void partd(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
    cout<<"Arranged string-> "<<s<<endl;
}
void parte(){
    string s;
    cout<<"Enter string:";
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){   
            s[i]=s[i]+32;    
        }
    }
    cout<<"Lowercase string-> "<<s<<endl;

}
int main(){
    cout<<"Concatenation\n";
    parta();
    cout<<endl;
    cout<<"Reversing\n";
    partb();
    cout<<endl;
    cout<<"Deleting vowels\n";
    partc();
    cout<<endl;
    cout<<"Alphabetical order\n";
    partd();
    cout<<endl;
    cout<<"Uppercase to lowercase\n";
    parte();
    cout<<endl;
    return 0;
}
