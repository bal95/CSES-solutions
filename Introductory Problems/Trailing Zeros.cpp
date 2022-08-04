// Problem Link: https://cses.fi/problemset/task/1618

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;

void testcase(){
    int n; cin>>n;
    int count=0;
    while(n!=0){
        count+=n/5;
        n/=5;
    }
    cout<<count;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}