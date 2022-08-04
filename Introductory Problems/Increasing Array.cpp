// Problem Link: https://cses.fi/problemset/task/1094

#include<bits/stdc++.h>

using namespace std;

void testcase(){
    int n; vector<long long> nos;
    cin>>n;
    for(int i=0;i<n;i++){
        long long no; cin>>no;
        nos.push_back(no);
    }
    long long ops=0;
    for(int i=1;i<n;i++){
        if(nos[i]<nos[i-1]){
            ops+=nos[i-1]-nos[i];
            nos[i]=nos[i-1];
        }
    }
    cout<<ops;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}