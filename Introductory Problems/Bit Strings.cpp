// Problem Link: https://cses.fi/problemset/task/1617

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int modexpo(ll a,ll b,ll m){
    a%=m;
    int res=1;
    while(b!=0){
        if(b%2!=0) res=(res*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return res;
}

void testcase(){
    ll n;
    cin>>n;
    cout<<modexpo(2LL,n,1000000007LL);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}