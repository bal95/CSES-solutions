// Problem Link: https://cses.fi/problemset/task/1068/

#include<bits/stdc++.h>

using namespace std;

void testcase(){
    long long n; cin>>n;
    while(true){
        if(n==1){
            cout<<n<<"\n";
            break;
        }
        else{
            cout<<n<<" ";
            n=n%2==0?n/2:3*n+1;
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}