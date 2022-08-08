// Problem Link: https://cses.fi/problemset/task/2165

//1->3 with n discs= 1->2 with n-1 discs + 1->3 with largest disc + 2->3 with n-1 discs

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void towerHanoi(int start,int end,int n){
    if(n==1) cout<<start<<" "<<end<<"\n";
    else{
        //1^2^3=0 so 0^start^end, or just start^end, will give the next stack
        towerHanoi(start,start^end,n-1); 
        cout<<start<<" "<<end<<"\n";
        towerHanoi(start^end,end,n-1);
    }
}

void testcase(){
    int n;cin>>n;
    cout<<(1<<n)-1<<"\n";
    towerHanoi(1,3,n);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int t; cin>>t;
    // while(t--)
    testcase();
}