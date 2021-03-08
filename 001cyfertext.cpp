#include<bits/stdc++.h>
using namespace std;
//typedef long long ll

int main(){
    map<char,int>mp;
    vector<char>v;
    for(char i='a';i<='z';i++)v.push_back(i);
    int vl=0;
    for(char i='a';i<='z';i++){
        mp[i]=vl;vl++;
    }
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        // cout<<((mp[s[i]]*7)+2)%26 ;
         cout<<v[((mp[s[i]]*7)+2)%26];
        //cout<<mp[(mp[s[i]]*7+2)%26];
    }
}
