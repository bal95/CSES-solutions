// Problem Link: https://cses.fi/problemset/task/1070

#include<bits/stdc++.h>

using namespace std;

void testcase(){
    int n;
    cin>>n;
    if(n==2 || n==3) cout<<"NO SOLUTION";
    else{
        for(int i=2;i<=n;i+=2) cout<<i<<" ";
        for(int i=1;i<=n;i+=2) cout<<i<<" ";
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}