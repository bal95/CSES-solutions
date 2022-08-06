// Problem Link: https://cses.fi/problemset/task/1754

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int abs(int a){return a<0?-a:a;}

void testcase(){
    int a,b;cin>>a>>b;
    if((a==0&&b!=0)||(b==0&&a!=0)||2*a<b||2*b<a) cout<<"NO\n";
    else{
        if(abs(2*a-b)%3==0&&abs(2*b-a)%3==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--)
        testcase();
}