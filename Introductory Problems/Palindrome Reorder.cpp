// Problem Link: https://cses.fi/problemset/task/1755

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void testcase(){
    string wrd; cin>>wrd;
    int len=wrd.length();
    int count[26]; fill(count,count+26,0);
    for(int i=0;i<len;i++) count[(int)wrd.at(i)-65]++;
    string rightstr="";
    for(int i=0;i<26;i++){
        rightstr+=string(count[i]>>1,(char)(i+65));
        count[i]-=(count[i]>>1)<<1;
    }
    string leftstr=rightstr; reverse(rightstr.begin(),rightstr.end());
    int rem=-1; bool nosol=false;
    for(int i=0;i<26;i++){
        if(count[i]){
            if(rem!=-1){nosol=true;break;}
            else rem=i;
        }
    }
    if(rem==-1) cout<<leftstr+rightstr;
    else if(!nosol) cout<<leftstr+(char)(rem+65)+rightstr;
    else cout<<"NO SOLUTION";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}