// Problem Link: https://cses.fi/problemset/task/1083/

#include<bits/stdc++.h>

using namespace std;

void testcase(){
    int n; vector<int> nos; 
    long long len,sum=0,missno;
    cin>>n; len=n;
    for(int i=0;i<n-1;i++){
        int no; cin>>no;
        nos.push_back(no);
    }
    for(auto i=nos.begin();i!=nos.end();i++) sum+=*i;
    missno=(len*(len+1))/2-sum;
    cout<<missno<<"\n";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}