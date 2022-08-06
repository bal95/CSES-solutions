// Problem Link: https://cses.fi/problemset/task/1071

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll sqr(ll a){return a*a;}

void testcase(){
    ll x,y; cin>>x>>y;
    ll startcell=max(x,y);
    ll startval=0,change=1;
    if(startcell==x){
        if(startcell%2==0){
            startval=sqr(startcell);
            change=-1;
        }
        else startval=sqr(startcell-1)+1;
        cout<<startval+(y-1)*change<<"\n";
    }
    else{
        if(startcell%2){
            startval=sqr(startcell);
            change=-1;
        }
        else startval=sqr(startcell-1)+1;
        cout<<startval+(x-1)*change<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--)
        testcase();
}