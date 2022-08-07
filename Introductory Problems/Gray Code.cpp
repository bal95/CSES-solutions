// Problem Link: https://cses.fi/problemset/task/2205

//ith gray code = i XOR floor(i/2)

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void testcase(){
    int n;cin>>n;
    for(int i=0;i<(1<<n);i++){
        bitset<16> temp(i^(i>>1));
        string bitstr=temp.to_string().substr(16-n);
        cout<<bitstr<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}