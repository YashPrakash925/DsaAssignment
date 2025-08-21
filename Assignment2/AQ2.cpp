#include<bits/stdc++.h>
using namespace std;
void split(){
    string str;
    cin>>str;
    int n=str.length(),flag=0;
    for(int i=1;i<n-1 && flag==0;i++){
        for(int j=i+1;j<n && flag==0;j++){
            string part1=str.substr(0,i),part2=str.substr(i,j-i),part3=str.substr(j);
            if(part1.length()==0 || part2.length()==0 || part3.length()==0) continue;
            for(int p=0;p<3 && flag==0;p++){
                string s,t1,t2;
                if(p==0){ s=part1; t1=part2; t2=part3; }
                if(p==1){ s=part2; t1=part1; t2=part3; }
                if(p==2){ s=part3; t1=part1; t2=part2; }
                int found1=0,found2=0;
                for(int x=0;x<=t1.length()-s.length();x++){
                    int match=1;
                    for(int y=0;y<s.length();y++) if(t1[x+y]!=s[y]){ match=0; break; }
                    if(match){ found1=1; break; }
                }
                for(int x=0;x<=t2.length()-s.length();x++){
                    int match=1;
                    for(int y=0;y<s.length();y++) if(t2[x+y]!=s[y]){ match=0; break; }
                    if(match){ found2=1; break; }
                }
                if(found1 && found2){ flag=1; break; }
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    split();
    return 0;
}