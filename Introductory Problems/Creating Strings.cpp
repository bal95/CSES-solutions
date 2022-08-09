// Problem Link: https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void testcase(){
    string s; cin>>s;
    sort(s.begin(),s.end());
    set<string> present;
    do{
        if(!present.count(s)) present.insert(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<present.size()<<"\n";
    for(auto it=present.begin();it!=present.end();it++) cout<<*it<<"\n";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}