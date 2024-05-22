#include <bits/stdc++.h>
using namespace std;
int count_pieces(string s){
    int p = 1;
    int target =0;
    for(int i = 1; i<s.size() ; i++){
           if(s[i]==s[i-1]){
            continue;
           }
           else{
            p+=1;
           }
           if(s[i]=='1' && s[i-1]=='0'){
                target=1;
           }
    }
    return p-target;
}
int main(){
    int n;
    cin>>n;
    string s;
    for(int i =1 ; i<=n;i++){
        cin>>s;
       int r =  count_pieces(s);
       cout<<r<<endl;
    }
}
