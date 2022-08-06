// Problem Link: https://cses.fi/problemset/task/1092

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll sum1n(ll n){return (n*(n+1))>>1;}

void testcase(){
    ll n;cin>>n;
    ll sum=sum1n(n);
    if(sum%2) cout<<"NO";
    else{
        cout<<"YES\n";
        ll partition,leftsum=0,rightsum=0;
        for(partition=n>>1;partition<=n;partition++){
            leftsum=sum1n(partition);rightsum=sum-leftsum;
            if(leftsum>=rightsum) break;
        }
        ll moveno=(leftsum-rightsum)>>1;
        ll leftsize=moveno!=0?partition-1:partition;
        cout<<leftsize<<"\n";
        for(ll i=1;i<=partition;i++){
            if(i==moveno) continue;
            cout<<i<<" ";
        }
        cout<<"\n"<<n-leftsize<<"\n";
        if(moveno!=0) cout<<moveno<<" ";
        for(ll i=partition+1;i<=n;i++) cout<<i<<" ";
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}